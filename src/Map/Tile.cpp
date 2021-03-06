#include "Tile.h"
#include "../GameObjects/Enemies/Enemy.h"

Tile::Tile() : visited_(false) 
{
}

Tile::~Tile()
{
}

GameObjectPtr Tile::top()
{
	if(raw_.back()->delete_object())
	{
		raw_.pop_back();
		raw_.back()->set_discovered(true);
	}

	return raw_.back();
}

GameObjectPtr Tile::element(int index)
{
	return raw_[index];
}

void Tile::add(GameObjectPtr game_object)
{
	raw_.push_back(game_object);
}

int Tile::elements() const
{
	return raw_.size();
}

bool Tile::visited() const
{
	return visited_;
}

void Tile::set_visited(bool visited)
{
	visited_ = visited;
}
