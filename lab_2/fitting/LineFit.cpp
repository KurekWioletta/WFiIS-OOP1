#include "LineFit.h"


void LineFit::appendPoint(float x, float y){
    m_size++;
    m_sum_xx += x*x;
    m_sum_xy += x*y;
    m_sum_x += x;
    m_sum_y += y; 
}

std::string LineFit::expression() const{
    return " y = a * x";
}

unsigned int LineFit::nParams() const{
    return 2;
}

std::string LineFit::parameterName(int index) const{
    return m_param_names[index];
}
 
float LineFit::parameterValue(int index) const{
    if (index < 1) {
        return (m_sum_xy - m_sum_x * m_sum_y / m_size)
            /(m_sum_xx - m_sum_x * m_sum_x / m_size);
    }
    else {
        int a = (m_sum_xy - m_sum_x * m_sum_y / m_size)
            /(m_sum_xx - m_sum_x * m_sum_x / m_size);
        return (m_sum_y - a * m_sum_x) / m_size;
    }
    
}

Fit& LineFit::result(){
    return *this;
};