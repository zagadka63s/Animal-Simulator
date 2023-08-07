#include "Animal.h"
#include "Game.h"
#include "Player.h"
#include "Zoo.h"
#include "WildAnimal.h"
#include "Pet.h"
#include <iostream> // 

int main() {
    Animal lion("Лев", true);
    Game game("Приключения животных", 2023);
    Player player("John");
    Zoo zoo("Страна зоопарков", 10);
    WildAnimal tiger("Тигр", true);
    Pet dog("Buddy", 3);

    // Вывод информации о животных
    std::cout << "Создан " << lion.getSpecies() << " с " << (lion.isPredatory() ? "хищничество" : "нехищническая") << " черты.\n";
    std::cout << "Создал игру под названием " << game.getName() << " в году " << game.getYear() << ".\n";
    std::cout << "Создан игрок с именем " << player.getName() << ".\n";
    std::cout << "Создан зоопарк под названием " << zoo.getName() << " с мощностью " << zoo.getCapacity() << ".\n";
    std::cout << "Создал дикое животное " << tiger.getSpecies() << " то есть " << (tiger.isPredatory() ? "хищничество" : "нехищническая") << ".\n";
    std::cout << "Создал домашнюю собаку по кличке " << dog.getName() << " в возрасте " << dog.getAge() << ".\n";

    return 0;
}
