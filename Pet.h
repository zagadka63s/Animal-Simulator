#ifndef PET_H
#define PET_H

#include <string>

class Pet {
private:
    std::string name;
    int age;

public:
    Pet(const std::string& petName, int petAge);
    std::string getName() const;
    int getAge() const;
};

#endif // PET_H
