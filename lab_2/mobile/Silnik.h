#pragma once 
#include <string>

class Silnik {
    public:
        Silnik(std::string fuel, int power, int capacity)
            : m_fuel(fuel), m_power(power), m_capacity(capacity) {}; 
    private:
        std::string m_fuel; 
        int m_power; 
        int m_capacity; 
};