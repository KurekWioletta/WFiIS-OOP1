#include "MaszynaStanow.h"

using namespace std;

void MaszynaStanow::start(){
    m_index = 0;
    m_stan = m_stan_arr[m_index];
}

MaszynaStanow::~MaszynaStanow(){
	for (int i = 0; i < m_size; i++)
		delete m_stan_arr[i];
	delete m_stan_arr;
}

MaszynaStanow& MaszynaStanow::operator+= (Stan* stan){
    Stan** tmp = new Stan*[m_size]; 

    for (int i = 0; i < m_size; i++) {
        tmp[i] = new Stan(m_stan_arr[i]->getStan());
    }

    this->~MaszynaStanow();

    m_size++;   
    m_stan_arr = new Stan*[m_size]; 
    for (int i = 0; i < m_size - 1; i++)
        m_stan_arr[i] = tmp[i];

    if (m_size > 0)
        delete[] tmp;

    m_stan_arr[m_size - 1] = stan;
} 
  
MaszynaStanow MaszynaStanow::operator () (){
    MaszynaStanow tmp; 
    if (m_stan_arr)
        cout << "Wykonanie w stanie: " << m_stan->getStan() << endl;
    return tmp;
}

void MaszynaStanow::operator++ (){
    if (m_index < m_size - 1)
        m_index++;
    m_stan = m_stan_arr[m_index];
}  

void MaszynaStanow::operator-- (){
    if (m_index > 1)
        m_index--;
    m_stan = m_stan_arr[m_index];
}

ostream& operator << (ostream& out, const MaszynaStanow& maszyna){
    out << "Maszyna Stanow:" << endl; 
    for (int i = 0; i < maszyna.m_size; i++) {
        out << i << " " << maszyna.m_stan_arr[i]->getStan();
        if (i == maszyna.m_index)
            out << " <";
        out << endl; 
    }
    return out;
}
