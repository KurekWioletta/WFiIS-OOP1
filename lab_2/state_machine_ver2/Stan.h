#pragma once 
#include <string>

class Stan {
    public:
        Stan() = default;
        virtual void operator()() = 0;
        virtual const char* nazwa() const = 0;
        static std::string m_param;
        static std::string m_email;
};
