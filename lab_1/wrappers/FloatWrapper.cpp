#include "FloatWrapper.h"

Wrapper* FloatWrapper::clone() const{ 
    return new FloatWrapper(m_float); 
} 

std::ostream& FloatWrapper::print() const{
    return std::cout << m_float << " ";
}
