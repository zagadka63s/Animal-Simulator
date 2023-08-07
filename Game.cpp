#include "Game.h"
#include <iostream>

Game::Game(const std::string& gameName, int gameYear) : name(gameName), year(gameYear) {}

std::string Game::getName() const {
    return name;
}

int Game::getYear() const {
    return year;
}

void Game::play() const {
    std::cout << "Playing " << name << " (" << year << ")\n";
}


// В файле Game.cpp мы реализуем методы класса Game, так же, как и в предыдущем классе. Мы используем конструктор для инициализации имени игры и года выпуска.
// Методы getName и getYear просто возвращают соответствующие значения переменных-членов. Метод play выводит сообщение о начале игры.