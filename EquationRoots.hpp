#ifndef EQUATIONROOTS_H
#define EQUATIONROOTS_H

#include <vector>
#include <cmath>

class Roots {
    virtual std::vector<double> realRoots() = 0;
};

class LinearEq : public Roots {
protected:
    double k_, b_;
public:
    LinearEq(double k, double b) : k_(k), b_(b) {}

    std::vector<double> realRoots() override {
        return (fabs(b_) < 1e-6 ? std::vector<double>() : std::vector<double>() = {-b_ / k_});
    }

};

class SquareEq : public Roots {
protected:
    double a_, b_, c_;
public:
    SquareEq(double a, double b, double c)
            : a_(a), b_(b), c_(c) {}

    std::vector<double> realRoots() override {
        double D = b_ * b_ - 4 * a_ * c_;
        return (D < 0 ? std::vector<double>() : fabs(a_) < 1e-6 ? LinearEq(b_, c_).realRoots()
                                                                : std::vector<double>() = {(-b_ + sqrt(D)) / (2 * a_),
                                                                                           (-b_ - sqrt(D)) /
                                                                                           (2 * a_)});
    }
};

#endif //EQUATIONROOTS_H