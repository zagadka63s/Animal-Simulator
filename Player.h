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

// В файле Player.h мы определяем класс Player с двумя закрытыми переменными-членами name и score.
// У них есть публичные методы для получения имени и счета игрока (getName и getScore) и метод increaseScore, который позволяет увеличить счет игрока на определенное количество очков.