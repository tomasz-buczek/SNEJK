#pragma once

#include "D3DGraphics.h"
#include "Location.h"


class Board {
public:
	Board(D3DGraphics& gfx);
	void DrawCell(const Location& loc, D3DCOLOR c);
	int GetGridWidth() const {
		return width;
	}
	int GetGridHeight() const {
		return height;
	}
private:
	static constexpr int dimension = 20;
	static constexpr int width = 30;
	static constexpr int height = 30;
	D3DGraphics& gfx;
};