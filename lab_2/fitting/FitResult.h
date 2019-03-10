#pragma once
#include <string>

class FitResult {
    public: 
        virtual std::string expression() const = 0;
        virtual unsigned int nParams() const  = 0;
        virtual std::string parameterName(int index) const = 0;
        virtual float parameterValue(int index) const = 0;
        virtual ~FitResult(){};
};