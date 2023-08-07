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

// ¬ файле Game.h мы определ€ем класс Game с двум€ закрытыми переменными-членами name и year.
// ” них есть публичные методы дл€ получени€ имени и года выпуска (getName и getYear) и метод play, который выводит сообщение о начале игры.