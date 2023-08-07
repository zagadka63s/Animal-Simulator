#include "Zoo.h"

Zoo::Zoo(const std::string& zooName, int zooCapacity) : name(zooName), capacity(zooCapacity), animalCount(0) {}

std::string Zoo::getName() const {
    return name;
}

int Zoo::getCapacity() const {
    return capacity;
}

int Zoo::getAnimalCount() const {
    return animalCount;
}

bool Zoo::addAnimal() {
    if (animalCount < capacity) {
        animalCount++;
        return true;
    }
    return false;
}

bool Zoo::removeAnimal() {
    if (animalCount > 0) {
        animalCount--;
        return true;
    }
    return false;
}
// В файле Zoo.cpp мы реализуем методы класса Zoo. Мы используем конструктор для инициализации имени зоопарка и его вместимости. 
// Счетчик животных animalCount начинается с 0. Методы getName, getCapacity и getAnimalCount просто возвращают соответствующие значения переменных-членов.