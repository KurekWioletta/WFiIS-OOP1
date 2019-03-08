#pragma once
#include "Ksztalt.h"
#include <math.h>

class Trojkat : public Ksztalt{
    public:
        Trojkat(int a = 0, int b = 0, int c = 0) 
            : m_a(a), m_b(b), m_c(c) {};
        virtual void wypisz(std::ostream& str) const;
        virtual double polePow() const;
    private:
        int m_a;
        int m_b;
        int m_c;
};