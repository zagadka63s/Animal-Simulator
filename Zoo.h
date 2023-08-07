#ifndef ZOO_H
#define ZOO_H

#include <string>

class Zoo {
private:
    std::string name;
    int capacity;
    int animalCount;

public:
    Zoo(const std::string& zooName, int zooCapacity);
    std::string getName() const;
    int getCapacity() const;
    int getAnimalCount() const;
    bool addAnimal();
    bool removeAnimal();
};

#endif // ZOO_H

// � ����� Zoo.h �� ���������� ����� Zoo � ����� ��������� �����������-������� name, capacity � animalCount.
//� ��� ���� ��������� ������ ��� ��������� ����� ��������, ����������� � ���������� �������� (getName, getCapacity � getAnimalCount),
// � ����� ������ addAnimal � removeAnimal, ������� ��������� ��������� � ������� �������� �� ��������.
