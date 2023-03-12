#ifndef SHAPE_H
#define SHAPE_H

#include <fstream>


class LoadShape;

class Shape {
public:
    virtual void Save() = 0;

    virtual void Show() = 0;

};

class Square : public Shape {
public:
    Square(int a, int b, double light)
            : a(a), b(b), length_(light) {}

    void Show() override {
        std::cout << "Square: coordinates(" << a << " , " << b << ")" << std::endl;
        std::cout << "Linght: " << length_ << std::endl;
    }

    void Save() override {
        std::fstream file;
        file.open("Shape.txt", std::ios::app);
        file << "Square" << ":::" << a << ":::" << b << ":::" << length_ << "\n";
        file.close();
    }

private:
    int a, b;
    double length_;
};

class Rectange : public Shape {
public:
    Rectange(int a, int b, double light, double width)
            : a(a), b(b), length_(light), width_(width) {}

    void Show() override {
        std::cout << "Rectange: coordinates(" << a << " , " << b << ")" << std::endl;
        std::cout << "Linght: " << length_;
        std::cout << " Width: " << width_ << std::endl;
    }

    void Save() override {
        std::fstream file;
        file.open("Shape.txt", std::ios::app);
        file << "Rectange" << ":::" << a << ":::" << b << ":::" << length_ << ":::" << width_ << "\n";
        file.close();
    }

private:
    int a, b;
    double length_, width_;
};

class Circle : public Shape {
public:

    Circle(int a, int b, double radius)
            : a(a), b(b), radius_(radius) {}

    void Show() override {
        std::cout << "Circle: coordinates(" << a << " , " << b << ")" <<
                  std::endl;
        std::cout << "Radius: " << radius_ <<
                  std::endl;
    }

    void Save() override {
        std::fstream file;
        file.open("Shape.txt", std::ios::app);
        file << "Circle" << ":::" << a << ":::" << b << ":::" << radius_ << "\n";
        file.close();
    }

private:
    int a, b;
    double radius_;
};

class Ellipce : public Shape {
public:
    Ellipce(int a, int b, double light, double width)
            : a(a), b(b), length_(light), width_(width) {}

    void Show() override {
        std::cout << "Ellipce: coordinates(" << a << " , " << b << ")" << std::endl;
        std::cout << "Linght: " << length_;
        std::cout << " Width: " << width_ << std::endl;
    }

    void Save() override {
        std::fstream file;
        file.open("Shape.txt", std::ios::app);
        file << "Ellipce" << ":::" << a << ":::" << b << ":::" << length_ << ":::" << width_ << "\n";
        file.close();
    }

private:
    int a, b;
    double length_, width_;
};


void Load(std::vector<Shape *> &shape) {
    int a, b;
    double length_, width_, radius_;
    std::fstream file;
    file.open("Shape.txt", std::ios::in);
    std::string s;
    while (std::getline(file, s)) {
        std::string str = s.substr(0, s.find(":::"));
        s.erase(0, str.length() + 3);
        if (str == "Square") {
            a = std::stoi(s.substr(0, s.find(":::")));
            s.erase(0, s.find_first_of(":") + 3);
            b = std::stoi(s.substr(0, s.find(":::")));
            s.erase(0, s.find_first_of(":") + 3);
            length_ = std::stod(s);
            Shape *sq = new Square(a, b, length_);
            shape.push_back(sq);

        } else if (str == "Rectange") {
            a = std::stoi(s.substr(0, s.find(":::")));
            s.erase(0, s.find_first_of(":") + 3);
            b = std::stoi(s.substr(0, s.find(":::")));
            s.erase(0, s.find_first_of(":") + 3);
            length_ = std::stod(s.substr(0, s.find(":::")));
            s.erase(0, s.find_first_of(":") + 3);
            width_ = std::stod(s);
            Shape *r = new Rectange(a, b, length_, width_);
            shape.push_back(r);

        } else if (str == "Circle") {
            a = std::stoi(s.substr(0, s.find(":::")));
            s.erase(0, s.find_first_of(":") + 3);
            b = std::stoi(s.substr(0, s.find(":::")));
            s.erase(0, s.find_first_of(":") + 3);
            radius_ = std::stod(s);
            Shape *c = new Circle(a, b, radius_);
            shape.push_back(c);

        } else if (str == "Ellipce") {
            a = std::stoi(s.substr(0, s.find(":::")));
            s.erase(0, s.find_first_of(":") + 3);
            b = std::stoi(s.substr(0, s.find(":::")));
            s.erase(0, s.find_first_of(":") + 3);
            length_ = std::stod(s.substr(0, s.find(":::")));
            s.erase(0, s.find_first_of(":") + 3);
            width_ = std::stod(s);
            Shape *el = new Ellipce(a, b, length_, width_);
            shape.push_back(el);

        }
    }
}


#endif //SHAPE_H