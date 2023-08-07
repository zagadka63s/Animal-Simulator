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

// ¬ файле Zoo.h мы определ€ем класс Zoo с трем€ закрытыми переменными-членами name, capacity и animalCount.
//” них есть публичные методы дл€ получени€ имени зоопарка, вместимости и количества животных (getName, getCapacity и getAnimalCount),
// а также методы addAnimal и removeAnimal, которые позвол€ют добавл€ть и удал€ть животных из зоопарка.
