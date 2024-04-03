#include "../headers/Pingouin.hpp"

    std::string nom = "";

    Pingouin::Pingouin(std::string nom) : nom(nom) {};

    void Pingouin::presenter(){
        std::cout << "Je m'appelle " << this->nom << std::endl;
}

    void Pingouin::marcher() {
        std::cout << "Je suis un pingouin unijambiste." << std::endl;

}
