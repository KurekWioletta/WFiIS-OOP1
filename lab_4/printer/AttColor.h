#pragma once

class AttColor {
    public:
        enum Option {
            MAGENTA = 0,
            GREEN = 1,
            GRAY = 2,
            WHITE = 3,
            RED = 4,
            BLACK = 5,
            YELLOW = 6,
            BLUE = 7,
            CYAN = 8
        };
        AttColor(Option color) : m_color(color) {};
        Option getColor() const { return m_color; };
        void setColor(Option color) { m_color = color; };
    private:
        Option m_color;
};

