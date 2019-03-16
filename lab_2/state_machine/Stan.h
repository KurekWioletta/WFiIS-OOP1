#pragma once
#include <string>

class Stan {
    public:
        Stan(std::string stan) : m_stan(stan) {};
        std::string getStan(){ return m_stan; }; 
    private: 
        std::string m_stan;
};
