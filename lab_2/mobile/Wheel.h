#pragma once

class Wheel{
    public:
        Wheel() : m_pressure(2.2) {};
        void UpdatePressure(float newP) { m_pressure = newP; };
        float Pressure() { return m_pressure; };
    private:
        float m_pressure;
};