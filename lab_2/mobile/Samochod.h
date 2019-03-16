#pragma once 
#include <iostream>
#include "Wheel.h"

class Samochod {
    public:
        Samochod();
        static void DefaultColor(std::string color) { m_color = color; };
        virtual Wheel** Wheels();
    protected: 
        static std::string m_color;
        Wheel* m_wheels[4];
        std::string m_name;  
        int m_counter = 0;
};
