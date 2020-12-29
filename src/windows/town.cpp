#include "town.hpp"

town::town(): go_shop(1150, 375, 250, 400, "Shop", 25, BLANK, WHITE, Color{255, 255, 255, 0}, YELLOW, Color{ 255, 255, 255, 0}, ORANGE, 0, 30),
	go_mine((window_width-200) / 2+15, 350, 200, 200, "Mine", 25, BLANK, WHITE, Color{255, 255, 255, 0}, YELLOW, Color{ 255, 255, 255, 0}, ORANGE, 0, 0) {}

void town::update()
{
	go_shop.update();
	go_mine.update();
}

void town::draw()
{
	//background
	DrawTextureEx(texture, { 0, 0 }, 0, 6, WHITE);

	//buttons
	go_shop.draw();
	go_mine.draw();

	//text
	const char* text = "TOWN";
	DrawText(text, (window_width - MeasureText(text, 40)) / 2, 50, 30, YELLOW);


}
