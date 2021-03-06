//
// A class representing a small dragon in the map
// 

#ifndef RUOEG_GAMEOBJECTS_ENEMIES_SMALLDRAGON_H_
#define RUOEG_GAMEOBJECTS_ENEMIES_SMALLDRAGON_H_

#include "../Enemy.h"

class SmallDragon : public Enemy
{
public:
	SmallDragon(Dungeon &dungeon, int x, int y, int score, int exp);
	~SmallDragon();

	void levelUp();
};

#endif // RUOEG_GAMEOBJECTS_ENEMIES_SMALLDRAGON_H_