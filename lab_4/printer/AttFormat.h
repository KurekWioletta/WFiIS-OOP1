#pragma once

class AttFormat {
    public:
        enum Option {
            BOLD = 0,
            DIM = 1,
            UNDERLINED = 2,
            RESET= 3
        };
        AttFormat(Option format) : m_format(format) {};
        Option getFormat() const { return m_format; };
        void setFormat(Option format) { m_format = format; };
    private:
        Option m_format;
};