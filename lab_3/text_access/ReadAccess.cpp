#include "ReadAccess.h"

const std::string ReadAccess::operator[](int index) const {
    int offset = getOffset(m_caption, index);
    return offset >= 0 ? m_caption.c_str() + offset : "\0";
} 

int getOffset(std::string caption, int index){
    int offset = 0, space_counter = 0;

    while (caption[offset] != '\0') {
        if (space_counter == index)
            break; 
        if (caption[offset] == ' ')
            space_counter++;
        offset++;
    }

    if (space_counter != index)
        return -1;
        
    return offset; 
}