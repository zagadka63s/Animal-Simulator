#include "Player.h"

Player::Player(const std::string& playerName) : name(playerName), score(0) {}

std::string Player::getName() const {
    return name;
}

int Player::getScore() const {
    return score;
}

void Player::increaseScore(int points) {
    score += points;
}

// В файле Player.cpp мы реализуем методы класса Player. Мы используем конструктор для инициализации имени игрока, а счет игрока начинается с 0. 
// Методы getName и getScore просто возвращают соответствующие значения переменных-членов