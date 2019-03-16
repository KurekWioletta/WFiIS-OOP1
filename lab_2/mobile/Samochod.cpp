#include "Samochod.h"

Samochod::Samochod(){
    for (int i = 0; i < 4; i++)
        m_wheels[i] = new Wheel();

    m_name = "A";
    m_counter = 0;
}

Wheel** Samochod::Wheels(){
    return m_wheels; 
}   

std::string Samochod::m_color = "a";