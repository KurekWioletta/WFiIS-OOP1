#pragma once
#include <iostream>
#include <vector>
#include "Structure.h"

class Dir : public Structure {
    public:
        Dir(std::string name) : Structure(name, true) {};
        ~Dir();
        void operator+= (Structure* file);
        Dir* get(std::string name);
        friend std::ostream& operator<< (std::ostream& out, const Dir& dir); 
        friend void get_dir_tree(const Dir& dir, int space_number);
    private: 
        std::vector <Structure*> m_subelements;
};
