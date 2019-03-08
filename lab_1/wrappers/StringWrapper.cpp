#include "StringWrapper.h"

Wrapper* StringWrapper::clone() const{ 
    return new StringWrapper(m_string); 
} 

std::ostream& StringWrapper::print() const{
    return std::cout << m_string << " ";
}

