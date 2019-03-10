#pragma once
#include "Stan.h"
#include <iostream>
#include <string>

class MaszynaStanow{
    public:
        MaszynaStanow(): m_size(0), m_stan_arr(NULL), m_index(0) {};
        ~MaszynaStanow();

        void start();
        MaszynaStanow& operator+= (Stan* stan);
        MaszynaStanow operator () ();
        void operator++ ();
        void operator-- ();

        friend std::ostream& operator << (std::ostream& out, const MaszynaStanow& maszyna);
    private:
        Stan** m_stan_arr;   
        Stan* m_stan;  
        int m_index;
        int m_size; 
};


