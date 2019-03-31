#pragma once

class Printable{
    public:
        Printable() = default;
        virtual void print(int width) const = 0;
};