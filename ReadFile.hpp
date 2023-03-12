#ifndef READFILE_H
#define READFILE_H

#include <fstream>
#include <string>
#include <bitset>

class ReadFile {
public:
    void Display() {
        std::fstream file;
        file.open(path, std::ios::in);
        std::string s;
        while (std::getline(file, s)) {
            std::cout << s << std::endl;
        }
        file.close();
    }

protected:
    std::string path = "file.txt";

};

class ReadFileAS : public ReadFile {
public:
    void Display() {
        std::fstream file;
        file.open(path, std::ios::in);
        std::string s;
        while (std::getline(file, s)) {
            for (int i = 0; i < s.length(); i++) {
                std::cout << (int) s[i] << " ";
            }
        }
        std::cout << std::endl;
        file.close();
    }
};

class ReadFileBIN : public ReadFile {
public:
    void Display() {
        std::fstream file;
        file.open(path, std::ios::in);
        std::string s;
        std::getline(file, s);
        for (int c: s) {
            std::bitset<8> bs(c);
            std::cout << bs;
        }

        std::cout << std::endl;
        file.close();
    }
};

#endif //READFILE_H