#pragma once
#include <iostream>

class Ksztalt{
    public:
        static void wypisz(const Ksztalt&);
        virtual void wypisz(std::ostream& i) const = 0;
        virtual double polePow() const = 0;
        virtual ~Ksztalt() {};
};