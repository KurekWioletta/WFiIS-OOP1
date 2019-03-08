#include "Kolo.h"

double Kolo::polePow() const{
    return 3.1415 * m_r * m_r; // pi = 3.1415
}

void Kolo::wypisz(std::ostream& str) const{
    str << "Kolo o promieniu: " << m_r << std::endl;
}