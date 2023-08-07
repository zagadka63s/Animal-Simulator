#ifndef GAME_H
#define GAME_H

#include <string>

class Game {
private:
    std::string name;
    int year;

public:
    Game(const std::string& gameName, int gameYear);
    std::string getName() const;
    int getYear() const;
    void play() const;
};

#endif // GAME_H

// � ����� Game.h �� ���������� ����� Game � ����� ��������� �����������-������� name � year.
// � ��� ���� ��������� ������ ��� ��������� ����� � ���� ������� (getName � getYear) � ����� play, ������� ������� ��������� � ������ ����.