#pragma once
#include "Fit.h"
#include <string>

class SlopeFit : public Fit{
    public:
        SlopeFit() : m_sum_xy(0), m_sum_xx(0) {};
        virtual void appendPoint(float x, float y);
        virtual std::string expression() const;
        virtual unsigned int nParams() const;
        virtual std::string parameterName(int index) const;
        virtual float parameterValue(int index) const;
        virtual Fit& result();
    private:
        std::string m_param_name = "a";
        float m_sum_xy;
        float m_sum_xx;
};