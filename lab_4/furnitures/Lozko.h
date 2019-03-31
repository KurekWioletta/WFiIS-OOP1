#pragma once
#include "Mebel.h"

class Lozko : public Mebel{
    public:
        Lozko(int x, int y, int z, int s) : Mebel(x, y, z), m_s(s) {};
        ~Lozko();
        std::ostream& print(std::ostream& str) const override;
    private:
        int m_s;
};

Lozko::~Lozko() {
    std::cout << "~Lozko" << std::endl;
}

std::ostream& Lozko::print(std::ostream& out) const {
    out << "Lozko: ";
    Mebel::print(out);
    out << "  sz.spania: " << m_s;

    return out;
}