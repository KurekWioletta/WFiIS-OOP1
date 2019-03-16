#pragma once
#include <iostream> 
#include "Stan.h"

class MaszynaStanow {
    public: 
        void start();
        void operator++ ();
        void operator-- ();
        MaszynaStanow& operator+= (Stan* state);
        MaszynaStanow operator () ();
        friend std::ostream& operator<< (std::ostream& out, const MaszynaStanow& maszyna);
    private:
        int m_size = 0;
        int m_current_state = 0;
        Stan* m_states[4];
        bool m_print_value = true;
};