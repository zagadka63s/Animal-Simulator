#ifndef PLAYER_H
#define PLAYER_H

#include <string>

class Player {
private:
    std::string name;
    int score;

public:
    Player(const std::string& playerName);
    std::string getName() const;
    int getScore() const;
    void increaseScore(int points);
};

#endif // PLAYER_H

// � ����� Player.h �� ���������� ����� Player � ����� ��������� �����������-������� name � score.
// � ��� ���� ��������� ������ ��� ��������� ����� � ����� ������ (getName � getScore) � ����� increaseScore, ������� ��������� ��������� ���� ������ �� ������������ ���������� �����.