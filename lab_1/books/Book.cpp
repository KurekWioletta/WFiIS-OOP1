#include "Book.h"

Book::~Book(){
    for (int i = 0; i < m_size; i++)
        delete m_pages[i];
    delete[] m_pages;
}

void Book::AddPage(B5Page* b5page){
    // saving old array to tmp
    Page** tmp = new Page*[m_size];

    for (int i = 0; i < m_size; i++) {
        tmp[i] = new B5Page(m_pages[i]->m_header, m_pages[i]->m_text);

        if (m_pages[i]->m_header == b5page->m_header){
            std::cout <<"[WARNING]:: Trying to add already existing page!" << std::endl;
            delete[] tmp;
            return;   
        }
    }

    for (int i = 0; i < m_size; i++)
        delete m_pages[i];
    delete[] m_pages;

    // adding new item to old array
    m_pages = new Page*[m_size + 1];
  
    for (int i = 0; i < m_size; i++)
        m_pages[i] = tmp[i];

    delete[] tmp;
    
    m_pages[m_size] = b5page; 
    m_size++;

};

void Book::Print() const{
    std::cout << std::endl;
    std::cout << "[Book::autor]       " << m_author << std::endl;
    std::cout << "[Page(0)::text]     " << m_title << std::endl; 
    for (int i = 0; i < m_size; i++){
        std::cout << "[Page(" << i + 1 << ")::header]   " << m_pages[i]->m_header << std::endl;
        std::cout << "[Page(" << i + 1 << ")::text]     " << m_pages[i]->m_text << std::endl;
    }
}

void Book::SetHeader(std::string header){
    Page** tmp = new Page*[m_size];

    for (int i = 0; i < m_size; i++)
        tmp[i] = new B5Page(header, m_pages[i]->m_text);

    delete[] m_pages;

    m_pages = new Page*[m_size];
  
    for (int i = 0; i < m_size; i++) 
        m_pages[i] = tmp[i];

    delete[] tmp;
}