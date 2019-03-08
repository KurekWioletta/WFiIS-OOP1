#include "Trojkat.h"

double Trojkat::polePow() const{
    double x = (m_a + m_b + m_c) / 2.0;
    return sqrt(x * (x - m_a) * (x - m_b) * (x - m_c));
}

void Trojkat::wypisz(std::ostream& str) const{
    str << "Trojkat o bokach: " << m_a << " " << m_b << " " << m_c <<std::endl;
}