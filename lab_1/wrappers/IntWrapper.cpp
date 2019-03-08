#include "IntWrapper.h"

Wrapper* IntWrapper::clone() const{ 
    return new IntWrapper(m_int); 
} 

std::ostream& IntWrapper::print() const{
    return std::cout << m_int << " ";
}

