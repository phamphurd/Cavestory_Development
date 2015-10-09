#ifndef GAME_H
#define	GAME_H

#include "../headers/animatedsprite.h"
#include "../headers/level.h"
#include "../headers/player.h"

class Graphics;

class Game {
public:
    Game();
    ~Game();
private:
    void gameLoop();
    void draw(Graphics &graphics);
    void update(float elapsedTime);
    
    Player _player;
    
    Level _level;
};

#endif	/* GAME_H */

