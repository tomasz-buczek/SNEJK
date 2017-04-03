#pragma once

#include "Board.h"

class Snake
{
private:
	class Segment
	{
	public:
		void InitHead(const Location& in_loc);
		void InitBody();
		void Follow(const Segment& next);
		void MoveBy(const Location& delta_loc);
		void Draw(Board& brd) const;
	private:
		Location loc;
		D3DCOLOR c;
	};
public:
	Snake(const Location& loc);
	void MoveBy(const Location& delta_loc);
	void Grow();
	void Draw(Board& brd) const;

private:
	static constexpr D3DCOLOR headColor = D3DCOLOR_XRGB(130, 130, 130);
	static constexpr D3DCOLOR bodyColor = D3DCOLOR_XRGB(0, 200, 200);
	static constexpr int nSegmentsMax = 100;
	Segment segments[nSegmentsMax];
	int nSegments = 1;

};