#include "PArr.h"

PArr::PArr(int size): m_size(size){ 
    m_array = new Wrapper*[size]; 
}

PArr::~PArr() {
    for(int i = 0; i < m_size; ++i)
        delete m_array[i];
    delete[] m_array;
}

Wrapper* &PArr::operator[] (int index){
    return m_array[index];
}
 
void PArr::operator= (const PArr& arr){
    this->~PArr();
    m_array = new Wrapper*[arr.m_size];
    m_size = arr.m_size; 
 
    for (int i = 0; i < m_size; i++)
        m_array[i] = arr.m_array[i]->clone();
}

std::ostream& operator<<(std::ostream& out, const PArr& arr) {
    for(int i = 0; i < arr.m_size; ++i)
        out << *arr.m_array[i] << " ";
    return out;
}
