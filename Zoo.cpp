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
// � ����� Zoo.cpp �� ��������� ������ ������ Zoo. �� ���������� ����������� ��� ������������� ����� �������� � ��� �����������. 
// ������� �������� animalCount ���������� � 0. ������ getName, getCapacity � getAnimalCount ������ ���������� ��������������� �������� ����������-������.