#pragma once
#include "Wrapper.h"

class IntWrapper : public Wrapper{
    public:
        IntWrapper(int x = 0): m_int(x){};
        
        Wrapper* clone() const override;
        std::ostream& print() const override;
    private:
        int m_int;
};