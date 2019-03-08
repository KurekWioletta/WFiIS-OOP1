#include "Kwadrat.h"

double Kwadrat::polePow() const{
    return m_a * m_a;
}

void Kwadrat::wypisz(std::ostream& str) const{
    str << "Kwadrat o boku: " << m_a << std::endl;
}