#ifndef BITSTRING_H
#define BITSTRING_H

#include "Sstring.hpp"

class BitString : public Sstring {
public:
    BitString(const Sstring &copy)
            : Sstring(copy) { proverka(); };

    BitString() : BitString("") {};

    void proverka() {
        for (int i = 0; i < size(); i++) {
            if ((S[i] != '1') && (S[i] != '0')) {
                clear();
            }
        }
    }
};

#endif //BITSTRING_H