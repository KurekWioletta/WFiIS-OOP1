#pragma once
#include "Mebel.h"

class Sofa : public Mebel {
    public:
        Sofa(int x, int y, int z, int s) : Mebel(x, y, z), m_s(s) {};
        virtual ~Sofa();
        std::ostream& print(std::ostream& str) const override;
        friend std::ostream& operator << (std::ostream& out, const Sofa& sofa);
    private:
        int m_s;
};

Sofa::~Sofa() {
    std::cout << "~Sofa" << std::endl;
}

std::ostream& Sofa::print(std::ostream& out) const {
    out << "Sofa: ";
    Mebel::print(out);
    out << "  siedzisko: " << m_s;

    return out;
}

std::ostream& operator << (std::ostream& out, const Sofa& sofa) {
    out << "jako ";
    sofa.Mebel::print(out);
    return sofa.print(out);
}