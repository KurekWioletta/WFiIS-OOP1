#pragma once
#include "Wrapper.h"
#include <iostream>

class PArr{
    public:
	PArr() = default;
	PArr(int size);
        ~PArr();

        Wrapper*& operator[] (int index);
        void operator= (const PArr& arr);
        friend std::ostream& operator<< (std::ostream& out, const PArr& arr);
    private:
        Wrapper** m_array;
        int m_size;
};
