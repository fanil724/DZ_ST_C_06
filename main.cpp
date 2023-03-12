#include <iostream>
#include <vector>
//#include "Pet.hpp"
//#include "EquationRoots.hpp"
#include "Shape.hpp"

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


    Shape *s = new Square(12, 23, 98);
    Shape *r = new Rectange(11, 12, 32, 24);
    Shape *c = new Circle(6, 9, 23);
    Shape *e = new Ellipce(5, 2, 12, 29);
    std::vector<Shape *> shape;
    shape.push_back(s);
    shape.push_back(r);
    shape.push_back(c);
    shape.push_back(e);
    for (auto item: shape) {
        item->Save();
    }
    for (auto item: shape) {
        item->Show();
    }

    std::vector<Shape *> sh;
    Load(sh);
    for (auto item: sh) {
        item->Show();
    }
}
