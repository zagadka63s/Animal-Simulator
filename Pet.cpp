#include "Pet.h"

Pet::Pet(const std::string& petName, int petAge) : name(petName), age(petAge) {}

std::string Pet::getName() const {
    return name;
}

int Pet::getAge() const {
    return age;
}
