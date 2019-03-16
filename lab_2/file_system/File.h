#pragma once
#include "Structure.h"

class File : public Structure {
    public:
        File(std::string name) : Structure(name) {};
        ~File(){};
};