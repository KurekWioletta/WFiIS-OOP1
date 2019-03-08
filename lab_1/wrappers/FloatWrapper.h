#pragma once
#include "Wrapper.h"

class FloatWrapper : public Wrapper{  
    public:
        FloatWrapper(float x) : m_float(x){}; 
        
        Wrapper* clone() const override;
        std::ostream& print() const override;
    private:
        float m_float;
};