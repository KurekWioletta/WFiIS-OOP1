#pragma once
#include <string>

class Page{
    public:
        Page(std::string header = "empty", std::string text = "empty")
            : m_header(header), m_text(text){};
        virtual ~Page() = default;

        virtual void Print() const = 0;
        virtual void SetHeader(std::string header) = 0; 
        std::string m_header;
        std::string m_text;
    protected:
};