#pragma once
#include "Page.h"
#include <string>
#include <iostream>
 
class B5Page : public Page{
    public:
        B5Page(std::string header = "empty", std::string text = "empty")
            : Page(header, text){};

        B5Page* Copy();
        std::string GetHeader() const { return Page::m_header;};
        std::string GetText() const { return Page::m_text;};
        void Print() const override;
        void SetHeader(std::string header) override; 
};