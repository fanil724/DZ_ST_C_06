#ifndef BASE_H
#define BASE_H

template<class T1, class T2>
class Bases {
public:
    Bases() : value1_(0), value2_(0) {}

    Bases(T1 value1, T2 value2)
            : value1_(value1), value2_(value2) {}

    ~Bases() = default;

    T1 &GetValue1() {
        return value1_;
    }

    T2 &GetValue2() {
        return value2_;
    }

    void Print() {
        std::cout << "Value1: " << value1_ << std::endl;
        std::cout << "Value2: " << value2_ << std::endl;
    }

protected:
    T1 value1_;
    T2 value2_;
};

template<class T1, class T2, class T3, class T4>
class Child1 : public Bases<T1, T2> {
public:
    Child1() : value3_(0), value4_(0) {}

    Child1(T1 value1, T2 value2, T3 value3, T4 value4)
            : Bases<T1, T2>(value1, value2), value3_(value3), value4_(value4) {}

    ~Child1() = default;

    T3 &GetValue3() {
        return value3_;
    }

    T4 &GetValue4() {
        return value4_;
    }

    void Print() {
        std::cout << "Value1: " << Bases<T1,T2>::value1_ << std::endl;
        std::cout << "Value2: " << Bases<T1,T2>::value2_ << std::endl;
        std::cout << "Value3: " << value3_ << std::endl;
        std::cout << "Value4: " << value4_ << std::endl;
    }

protected:
    T3 value3_;
    T4 value4_;
};


template<class T1, class T2, class T5, class T6>
class Child2 : public Bases<T1, T2> {
public:
    Child2() : value5_(0), value6_(0) {}

    Child2(T1 value1, T2 value2, T5 value5, T6 value6)
            : Bases<T1, T2>(value1, value2), value5_(value5), value6_(value6) {}

    ~Child2() = default;

    T5 &GetValue5() {
        return value5_;
    }

    T6 &GetValue6() {
        return value6_;
    }

    void Print() {
        std::cout << "Value1: " << Bases<T1,T2>::value1_ << std::endl;
        std::cout << "Value2: " << Bases<T1,T2>::value2_ << std::endl;
        std::cout << "Value5: " << value5_ << std::endl;
        std::cout << "Value6: " << value6_ << std::endl;
    }

protected:
    T5 value5_;
    T6 value6_;
};

#endif //BASE_H