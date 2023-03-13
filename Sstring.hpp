#ifndef SSTRING_H
#define SSTRING_H

#include <algorithm>
#include <cstring>



class Sstring {
public:
    Sstring() : S(new char[1]), light_(0) {}

    Sstring(const char *str) {
        light_ = strlen(str);
        S = new char[light_ + 1];
        strcpy(S, str);
    }

    Sstring(const Sstring &obj) : Sstring(obj.S) {}

    ~Sstring() {
        delete[] S;
    }

    void claen() {
        delete[] S;
        S = new char[1];
        light_ = 0;
    }

    char *get() {
        return S;
    }

    Sstring &operator=(const Sstring &obj) {
        Sstring copy(obj);
        light_ = copy.light_;
        std::swap(S, copy.S);
        return *this;
    }

    void Print() {
        for (int i = 0; i < light_; i++) {
            std::cout << S[i];
        }
        std::cout << std::endl;
    }

    size_t &size() {
        return light_;
    }

    Sstring &operator+=(const Sstring &obj) {
        light_ += obj.light_;
        strcat(S, obj.S);
        return *this;
    }

    Sstring operator+(const Sstring &obj) {
        char *str = new char[light_ + obj.light_ + 1];
        strcpy(str, S);
        strcpy(str + light_, obj.S);
        return {str};
    }

    bool operator==(const Sstring &obj) {
        if (0 == (strcmp(S, obj.S)))
            return true;
        return false;
    }

    bool operator!=(const Sstring &obj) {
        if (0 == (strcmp(S, obj.S)))
            return false;
        return true;
    }


private:
    char *S;
    size_t light_ = 0;
};

#endif //SSTRING_H