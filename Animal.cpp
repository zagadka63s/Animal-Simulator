#include "Animal.h"

Animal::Animal(const std::string& animalSpecies, bool predator) : species(animalSpecies), isPredator(predator) {}

std::string Animal::getSpecies() const {
    return species;
}

bool Animal::isPredatory() const {
    return isPredator;
}

