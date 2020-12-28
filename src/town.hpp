#pragma once

#include <raylib.h>

#include "window.hpp"
#include "main_window.hpp"

//#include "button.hpp"
#include "all_buttons.hpp"
#include <iostream>





class town : window
{
private:
	go_shop_btn go_shop;
	go_mine_btn go_mine;

public:
	town(): go_shop(50, 450, 150, 75, "Shop", 20, GRAY, LIGHTGRAY),
		go_mine(window_width-200, 450, 150, 75, "Mine", 20, GRAY, LIGHTGRAY) {}


	void draw() {
		go_shop.update();
		go_mine.update();
		std::cout << mouse_position.x << '\t' << mouse_position.y << std::endl;
		go_shop.draw();
		go_mine.draw();

		const char* text = "TOWN";
		DrawText(text, (window_width - MeasureText(text, 30)) / 2, 50, 30, DARKGRAY);
	}
};

