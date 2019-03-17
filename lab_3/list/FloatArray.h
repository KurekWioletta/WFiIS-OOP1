#pragma once
#include <iostream>

class FloatArray : public Array{
    public: 
        FloatArray(int size) {
            m_array = new float[size];
            m_size = size;
        }

        ~FloatArray(){
            delete[] m_array;
        }

        void PrintArray() const override {
            std::cout << "FloatArray: ("; 
            for (int i = 0; i < m_size; i++) {
                std::cout << m_array[i];
                if (i < m_size - 1)
                    std::cout << ", "; 
            }
            std::cout << ")" << std::endl; 
        }

        float& operator[] (int index) {
            return m_array[index];
        }
    private: 
        float* m_array;
        int m_size;
};