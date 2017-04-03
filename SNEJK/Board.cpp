#include "Board.h"
#include <assert.h>

Board::Board(D3DGraphics& gfx)
	:
	gfx(gfx)
{
}

void Board::DrawCell(const Location & loc, D3DCOLOR c)
{
	assert(loc.x >= 0);
	assert(loc.x < width);
	assert(loc.y >= 0);
	assert(loc.y < height);
	gfx.DrawRectDim(loc.x * dimension, loc.y * dimension, dimension, dimension, c);
}
