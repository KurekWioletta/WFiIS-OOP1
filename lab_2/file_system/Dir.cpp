#include "Dir.h"

Dir::~Dir(){
    std::cout << "Deleting Dir: " << this->get_name() << std::endl;
    for (unsigned int i = 0; i < m_subelements.size(); i++) {
        std::cout << "About to delete " << m_subelements.at(i)->get_name() << std::endl;
        delete m_subelements.at(i);
    }
}

Dir* Dir::get(std::string name) {
    for (unsigned int i = 0; i < m_subelements.size(); i++) {
        if (m_subelements.at(i)->get_name() == name){
            Dir* dir = dynamic_cast<Dir*>(m_subelements.at(i));
            return dir;
        }
    } 
    return nullptr;
}

void Dir::operator+= (Structure* file) { 
    m_subelements.push_back(file); 
}

std::ostream& operator<< (std::ostream& out, const Dir& dir) {
    std::cout << dir.get_name() << std::endl;
    get_dir_tree(dir, 1);
    return out;   
} 

void get_dir_tree(const Dir& dir, int space_number) {
    for (unsigned int i = 0; i < dir.m_subelements.size(); i++) {
        for(int j = 0; j < space_number; j++)
            std::cout << "  ";   
        std::cout << dir.m_subelements.at(i)->get_name() << std::endl;
        if (dir.m_subelements.at(i)->is_dir()) {
            Dir* subdir = dynamic_cast<Dir*>(dir.m_subelements.at(i));
            
            if (!subdir->m_subelements.empty()) {
                get_dir_tree(*subdir, ++space_number); 
            }
        }
    }
}