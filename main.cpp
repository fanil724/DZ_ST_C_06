#include <iostream>
#include <vector>
#include "Pet.hpp"
#include "EquationRoots.hpp"
#include "Shape.hpp"
#include "Base.hpp"
#include "ReadFile.hpp"
#include "Sstring.hpp"
#include "BitString.hpp"


int main() {
//    Dog d("Sharik", 6);
//    d.Say();
//    std::cout << d.age() << std::endl;
//    Cat c("Barsik", 3);
//    c.Say();
//    std::cout << c.age() << std::endl;
//    Parrot p("Kesha", 1);
//    p.Say();
//    std::cout << p.age() << std::endl;

//    SquareEq s(4, 21, 5);
//    for (auto i: s.realRoots()) {
//        std::cout << i << " ";
//    }

//    Shape *s = new Square(12, 23, 98);
//    Shape *r = new Rectange(11, 12, 32, 24);
//    Shape *c = new Circle(6, 9, 23);
//    Shape *e = new Ellipce(5, 2, 12, 29);
//    std::vector<Shape *> shape;
//    shape.push_back(s);
//    shape.push_back(r);
//    shape.push_back(c);
//    shape.push_back(e);
//    for (auto item: shape) {
//        item->Save();
//    }
//    for (auto item: shape) {
//        item->Show();
//    }
//
//    std::vector<Shape *> sh;
//    Load(sh);
//    for (auto item: sh) {
//        item->Show();
//    }

//    Bases b(45, 23);
//    b.Print();
//    std::cout << std::endl;
//    Child1 c1(12, 56, 54, 98);
//    Child2 c2(1562, 456, 54645, 9128);
//    c1.Print();
//    std::cout << std::endl;
//    c2.Print();
//    Child2<int, int, int, int> c;
//    c.Print();

//    ReadFile r;
//    r.Display();
//
//    ReadFileAS read;
//    read.Display();
//
//    ReadFileBIN rd;
//    rd.Display();

//    Sstring s("Hello my frends");
//    std::cout << s.size() << std::endl;
//    s.Print();
//    Sstring s5("Hello IT-WORK");
//    std::cout << s5.size() << std::endl;
//    s5.Print();
//    Sstring fd(s + s5);
//    s.Print();
//    s5.Print();
//    fd.Print();
//    std::cout << (s != s5);

    BitString bit("101010");
    bit.Print();
    BitString b("10101011111000");
    b.Print();
    BitString bop;
    bop = bit + b;
    bop.Print();
    bit += bop;
    bit.Print();
    bit = b;
    bit.Print();
}
