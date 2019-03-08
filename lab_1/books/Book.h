#pragma once
#include "B5Page.h" 

class Book : public Page{
    public:
        Book(std::string title = "empty", std::string author = "Anonym")
            : m_author(author), m_title(title), m_size(0){}
        ~Book();

        void AddPage(B5Page* b5page);
        void Print() const override; 
        void SetHeader(std::string header) override; 
    private:
        std::string m_author;
        std::string m_title;
        Page** m_pages;
        int m_size; 
};