#pragma once
#include <string>

class ReadAccess {
public:
    ReadAccess(std::string caption) : m_caption(caption) {};
    const std::string operator[](int index) const;
private:
    std::string m_caption;    
};

int getOffset(std::string caption, int index);