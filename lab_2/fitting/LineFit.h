#pragma once
#include "Fit.h"
#include "FitResult.h"

class LineFit : public Fit{
    public:
        LineFit() : m_size(0), m_sum_x(0), m_sum_xx(0), m_sum_xy(0) {};
        virtual void appendPoint(float x, float y);
        virtual std::string expression() const;
        virtual unsigned int nParams() const;
        virtual std::string parameterName(int index) const;
        virtual float parameterValue(int index) const;
        virtual Fit& result();
    private:
        std::string m_param_names[2] = {"a", "b"};
        float m_sum_xy;
        float m_sum_xx;
        float m_sum_x;
        float m_sum_y;
        float m_size;
};