#ifndef PINGOUIN
#define PINGOUIN

#include "Aquatique.hpp"
#include "Terrestre.hpp"

#include <iostream>
#include <string>

class Pingouin : public Aquatique, public Terrestre{
    private:
        std::string nom;

    public:
        Pingouin(std::string);
        void presenter();
        void marcher() override;
};

#endif
