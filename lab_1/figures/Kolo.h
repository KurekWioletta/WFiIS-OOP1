#pragma once
#include "Ksztalt.h"

class Kolo : public Ksztalt{
    public:
        Kolo(int r = 0) : m_r(r) {};
        virtual void wypisz(std::ostream& str) const;
        virtual double polePow() const;
    private:
        int m_r;
};