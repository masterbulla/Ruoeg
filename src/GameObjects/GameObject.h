//
// Virtual class for all entities in the game 
//

#ifndef RUOEG_GAMEOBJECTS_GAMEOBJECT_H_
#define RUOEG_GAMEOBJECTS_GAMEOBJECT_H_

class GameObject
{
public:
	enum class Type : char
	{
		// Terrains
		None = ' ',
		VerticalWall = '|',
		HorizontalWall = '-',
		Corridor = '#',
		Lit = '.',
		Door = '+',
		DownStairs = '>',

		// Player
		Player = '@',

		// Enemies
		SmallDragon = 'd',
		Dragon = 'D',
		SmallGoblin = 'g',
		Goblin = 'G',
		SmallSkeleton = 's',
		Skeleton = 'S',
		SmallTroll = 't',
		Troll = 'T',

		// Chests
		Chest = 'c',

		// Debug purposes
		Dummy = '?'
	};

	enum class Color : int
	{
		Red_Black = 1,		// Walls/Non-walkable
		Green_Black = 2,	// Floor/Walkable
		Yellow_Red = 3,		// Bosses
		Cyan_Black = 4,		// Doors/Stairs/Chests
		Yellow_Black = 5,	// Enemies
		White_Black = 6		// Default
	};

	explicit GameObject(Type type);
	virtual ~GameObject();

	virtual Type type() const;
	virtual bool walkable() const;

protected:
	Type type_;
	bool walkable_;
};

#endif // RUOEG_GAMEOBJECTS_GAMEOBJECT_H_