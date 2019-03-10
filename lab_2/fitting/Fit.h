#pragma once
#include "FitResult.h"

class Fit : public FitResult{
    public:
        virtual void appendPoint(float x, float y){};
        virtual Fit& result() = 0;
};