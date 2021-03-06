#include "exit.hpp"

mine_exit::mine_exit(float x, float y, float width, float height) : grid_cell(x, y, width, height)
{
	this->color = GREEN;
	destructable = false;
	blocked = false;
	cell_type = map_object::EXIT;
}

void mine_exit::draw()
{
	//DrawRectangleRec(*this, color);
	DrawTextureEx(textures[map_object::ROCK], { x, y }, 0, 3, WHITE);
	DrawTextureEx(textures[cell_type], { x, y }, 0, 3, WHITE);
}