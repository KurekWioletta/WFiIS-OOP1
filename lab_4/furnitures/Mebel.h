#pragma once
#include <iostream>

class Mebel {
    public:
        Mebel(int x, int y, int z) : m_x(x), m_y(y), m_z(z){};
        virtual ~Mebel();
        virtual std::ostream& print(std::ostream& str) const; 
        friend std::ostream& operator << (std::ostream& out, const Mebel& mebel);
    private:
        int m_x;
        int m_y;
        int m_z;
};

Mebel::~Mebel() {
    std::cout << "~Mebel" << std::endl;
}

std::ostream& Mebel::print(std::ostream& out) const {
    out << "Mebel: sz:" << m_x << " wys:" << m_y << " dl:" << m_z;
    return out;
}

std::ostream& operator << (std::ostream& out, const Mebel& mebel) {
    return mebel.print(out);
}