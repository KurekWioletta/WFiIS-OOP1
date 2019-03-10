#include "SlopeFit.h"

void SlopeFit::appendPoint(float x, float y){
    m_sum_xy += (x+y); 
    m_sum_xx += (x+x);
}

std::string SlopeFit::expression() const{
    return " y = a * x";
}

unsigned int SlopeFit::nParams() const{
    return 1;
}

std::string SlopeFit::parameterName(int index) const{
    return m_param_name;
}

float SlopeFit::parameterValue(int index) const{
    return m_sum_xy/m_sum_xx;
}

Fit& SlopeFit::result(){
    return *this;
};