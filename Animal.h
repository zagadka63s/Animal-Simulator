#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>

class Animal {
private:
    std::string species;
    bool isPredator;

public:
    Animal(const std::string& animalSpecies, bool predator);
    std::string getSpecies() const; // Объявление метода getSpecies
    bool isPredatory() const;
};

#endif // ANIMAL_H
