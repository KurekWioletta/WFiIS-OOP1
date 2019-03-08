#include "B5Page.h"

void B5Page::Print() const{
    std::cout << "[Page::header]  " << Page::m_header << std::endl;
    std::cout << "[Page::text]    " << Page::m_text << std::endl;
}

void B5Page::SetHeader(std::string header){
    Page::m_header = header; 
}

B5Page* B5Page::Copy(){
    return new B5Page(Page::m_header + " (Copy)", Page::m_text);
}