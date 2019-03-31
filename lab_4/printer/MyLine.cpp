#include "MyLine.h"

std::string MyLine::rawString() {
    std::string str;
    for (int i = 0; i < m_length; i++)
        str += m_style;
    return str;
}

void MyLine::setLength(int length) {
    m_length = length;
}

void MyLine::setChar(char style) {
    m_style = style;
}

void MyLine::print(int width) const {
    for (int i = 0; i < (width - m_length) / 2; i++) 
        std::cout << " ";
    
    for (int i = 0; i < width; i++) 
        std::cout << m_style;

     std::cout << std::endl;
}