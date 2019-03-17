#pragma once 

class Array {
    public: 
        Array() = default;
        virtual ~Array() = default;
        virtual void PrintArray() const = 0;
};