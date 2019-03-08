#pragma once
#include "Ksztalt.h"

class Kwadrat : public Ksztalt {
    public:
        Kwadrat(int a = 0) : m_a(a) {};;
        virtual void wypisz(std::ostream& stri) const;
        virtual double polePow() const;
    private:
        int m_a;
};