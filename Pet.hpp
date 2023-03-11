#ifndef PET_H
#define PET_H

#include <string>
#include <utility>

class Pet {
public:
    Pet(std::string name, uint16_t age)
            : name_(std::move(name)), age_(age) {}

    virtual std::string name() = 0;

    virtual uint16_t age() = 0;

    virtual void Say() = 0;

protected:
    std::string name_;
    uint16_t age_;
};

class Dog : protected Pet {
public:
    Dog(std::string name, uint16_t age) : Pet(name, age) {}

    std::string name() override {
        return name_;
    }

    uint16_t age() override {
        return age_;
    }

    void Say() override {
        std::cout << name_ << " speak gav-gav" << std::endl;
    }


};

class Cat : protected Pet {
public:
    Cat(std::string name, uint16_t age) : Pet(name, age) {}

    std::string name() override {
        return name_;
    }

    uint16_t age() override {
        return age_;
    }

    void Say() override {
        std::cout << name_ << " speak may-may" << std::endl;
    }


};

class Parrot : protected Pet {
public:
    Parrot(std::string name, uint16_t age) : Pet(name, age) {}

    std::string name() override {
        return name_;
    }

    uint16_t age() override {
        return age_;
    }

    void Say() override {
        std::cout << name_ << " speak kray-kray" << std::endl;
    }


};

#endif //PET_H