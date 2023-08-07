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

// � ����� Player.cpp �� ��������� ������ ������ Player. �� ���������� ����������� ��� ������������� ����� ������, � ���� ������ ���������� � 0. 
// ������ getName � getScore ������ ���������� ��������������� �������� ����������-������