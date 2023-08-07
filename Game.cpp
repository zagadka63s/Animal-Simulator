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


// � ����� Game.cpp �� ��������� ������ ������ Game, ��� ��, ��� � � ���������� ������. �� ���������� ����������� ��� ������������� ����� ���� � ���� �������.
// ������ getName � getYear ������ ���������� ��������������� �������� ����������-������. ����� play ������� ��������� � ������ ����.