#include "MaszynaStanow.h"

void MaszynaStanow::start(){
    std::cout << "Rozpoczynamy dzialanie maszyny stanow!" << std::endl; 
}

MaszynaStanow MaszynaStanow::operator() (){ 
    //MaszynaStanow tmp;
    if (m_states[m_current_state] && m_print_value){
        m_states[m_current_state]->operator()();    
        m_print_value = false; 
    }
    return *this;
}
 
MaszynaStanow& MaszynaStanow::operator+= (Stan* state){
    m_states[m_size] = state;  
    m_size++;
    return *this;
}

void MaszynaStanow::operator++ (){
    if (m_current_state < 3)
        m_current_state++;
    m_print_value = true;
}

void MaszynaStanow::operator-- (){
    if (m_current_state > 0)
        m_current_state--;
    m_print_value = true;
}

std::ostream& operator<< (std::ostream& out, const MaszynaStanow& maszyna){
    for (int i = 0; i < maszyna.m_size; i++){
        if (i == maszyna.m_current_state)
            out << ">";
        out << maszyna.m_states[i]->nazwa();
        if (i == maszyna.m_current_state)
            out << "<";
        out << " "; 
    }

    return out;
}