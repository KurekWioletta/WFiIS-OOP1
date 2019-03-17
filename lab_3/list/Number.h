#pragma once
#include <iostream>

class Number : public Array{
    public:
        Number(float value) : m_value(value) {};

        void PrintArray() const {
            std::cout << "Number: " << m_value << std::endl;
        };
    private:
        float m_value;
};