#pragma once
#include "ReadAccess.h"

class ReadWriteAccess {
public:
    ReadWriteAccess(char* caption) : m_caption(caption) {};
    char* operator[](int index) const;
private:
    char* m_caption;
};
