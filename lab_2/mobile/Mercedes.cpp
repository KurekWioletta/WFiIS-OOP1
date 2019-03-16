#include "Mercedes.h"

Mercedes::Mercedes(std::string fuel, int power, int capacity){
    m_silnik = new Silnik(fuel, power, capacity); 
    m_name = "A";
} 
 
std::ostream& operator<<(std::ostream& out, const Mercedes& mercedes){
    out << "[INFO] Mercedes " << mercedes.m_name << std::endl;
    out << "[INFO] Stan licznika " << mercedes.m_counter << " [km]" << std::endl;
    out << "[INFO] Kolor " << Samochod::m_color << std::endl;  
    return out;     
} 

void Mercedes::WheelsPressureInfo(){
    for (int i = 0; i < 4; i++)
        std::cout << "[INFO] Mercedes " << m_name << " :: Wheel [" << i << "] :: Pressure "
            << m_wheels[i] << " [bar]" << std::endl; 
}
