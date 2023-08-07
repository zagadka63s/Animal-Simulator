#include "WildAnimal.h"

WildAnimal::WildAnimal(const std::string& animalSpecies, bool predator) : species(animalSpecies), isPredator(predator) {}

std::string WildAnimal::getSpecies() const {
    return species;
}

bool WildAnimal::isPredatory() const {
    return isPredator;
}


