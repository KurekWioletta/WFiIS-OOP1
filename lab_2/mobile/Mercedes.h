#pragma once
#include <iostream> 
#include "Samochod.h"
#include "Silnik.h"

class Mercedes: public Samochod{
    public:
        Mercedes(std::string fuel, int power, int capacity); 
        friend std::ostream& operator<<(std::ostream& out, const Mercedes& mercedes);
        void WheelsPressureInfo();
        //virtual void WheelsPressureInfo();
        //virtual void Wheels() override;
    private: 
        Silnik* m_silnik; 
}; 