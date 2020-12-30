#pragma once

#include <raylib.h>

#include "window.hpp"
#include "../buttons/navigate_buttons.hpp"
#include "../dwarf/dwarf.hpp"
#include "../grid/grid.hpp"

class mine : window
{
friend class shop;

private:
	const std::map<map_object, std::string> assets = {
		{ map_object::TUNNEL, "assets/Podloga.png" },
		{ map_object::ROCK, "assets/Sciana.png" },
		{ map_object::GOLD_ORE, "assets/Zloto.png" },
		{ map_object::TORCH, "assets/Pochodnia.png" },
	};

	leave_mine_btn leave_mine;
	grid mine_grid;
	map_generator map_gen{1000};
	dwarf player{mine_grid, 60, 90};
	Camera2D camera{};

public:
	mine();

	~mine();

	inline dwarf& get_dwarf()
	{
		return player;
	}

	void update();

	void draw();
};

