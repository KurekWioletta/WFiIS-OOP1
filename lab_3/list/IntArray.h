#pragma once
#include <iostream>

class IntArray : public Array{
    public: 
        IntArray(int size) {
            m_array = new int[size];
            m_size = size;
        }

        ~IntArray(){
            delete[] m_array;
        }

       void PrintArray() const {
            std::cout << "IntArray: ("; 
            for (int i = 0; i < m_size; i++) {
                std::cout << m_array[i]; 
                if (i < m_size - 1)
                    std::cout << ", "; 
            }
            std::cout << ")" << std::endl; 
        }
        
        int& operator[] (int index) {
            return m_array[index];
        }
    public:
        int* m_array;
        int m_size;
};