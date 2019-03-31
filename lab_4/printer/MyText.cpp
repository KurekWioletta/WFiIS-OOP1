#include "MyText.h"

std::string MyText::rawString() const {
    return m_text;
}

void MyText::setText(std::string text) {
    m_text = text;
}

void MyText::print(int width) const {
    for (unsigned int i = 0; i < (width - m_text.length()) / 2; i++) 
        std::cout << " ";
    std::cout << m_text << std::endl;
}