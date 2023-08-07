#ifndef WILDANIMAL_H
#define WILDANIMAL_H

#include <string>

class WildAnimal {
private:
    std::string species;
    bool isPredator;

public:
    WildAnimal(const std::string& animalSpecies, bool predator);
    std::string getSpecies() const;
    bool isPredatory() const;
};

#endif // WILDANIMAL_H
