#pragma once
#include "Wrapper.h"
#include <string>

class StringWrapper : public Wrapper{
    public:
        StringWrapper(std::string string = "") : m_string(string){};
        
        Wrapper* clone() const override;
        std::ostream& print() const override;
    private:
        std::string m_string;
};