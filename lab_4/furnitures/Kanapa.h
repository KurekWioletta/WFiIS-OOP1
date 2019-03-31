#pragma once

class Kanapa : public Sofa, public Lozko{
    public:
        Kanapa(int x, int y, int z, int s1, int s2) : Sofa(x, y, z, s1), Lozko(x, y, z, s2) {};
        ~Kanapa();
        std::ostream& print(std::ostream& str) const override;
};

Kanapa::~Kanapa() {
    std::cout << "~Kanapa" << std::endl;
}

std::ostream& Kanapa::print(std::ostream& out) const {
    out << std::endl << " jako ";
    Sofa::print(out);

    out << std::endl << " jako ";
    Lozko::print(out);

    return out;
}