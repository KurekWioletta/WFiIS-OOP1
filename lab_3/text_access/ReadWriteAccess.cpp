#include "ReadWriteAccess.h"

char* ReadWriteAccess::operator[](int index) const {
    int offset = getOffset(m_caption, index);
    return m_caption + offset;  
}