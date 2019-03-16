#pragma once

class Structure {
    public:
        Structure(std::string name, bool is_dir = false) : m_name(name), m_is_dir(is_dir) {};
        virtual ~Structure() = default;
        std::string get_name() const { return m_name; };
        bool is_dir() { return m_is_dir; };
    private:
        std::string m_name;
        bool m_is_dir;
};