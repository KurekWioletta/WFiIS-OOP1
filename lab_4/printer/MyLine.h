#pragma once
#include "AttColor.h"
#include "Printable.h"
#include <iostream>

class MyLine : public AttColor, public Printable {
    public:
        MyLine(char style, int length, Option color) 
            : m_style(style), m_length(length), AttColor(color) {};
        std::string rawString();
        void setLength(int length);
        void setChar(char style);
        void print(int width) const override;
    private:
        char m_style;
        int m_length;
};