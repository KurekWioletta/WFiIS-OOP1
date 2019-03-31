#pragma once
#include "AttColor.h"
#include "AttFormat.h"
#include "Printable.h"
#include <iostream>

class MyText : public AttColor, public AttFormat, public Printable {
    public:
        MyText(std::string text, AttFormat::Option format, AttColor::Option color) 
            : m_text(text), AttFormat(format), AttColor(color) {};
        std::string rawString() const;
        void setText(std::string text);
        void print(int width) const override;
    private:
        std::string m_text;
};