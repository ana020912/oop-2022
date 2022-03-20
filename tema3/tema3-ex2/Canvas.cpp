#include <iostream>
#include "Canvas.h"

Canvas::Canvas(int width, int height)
{
	w = width;
	h = height;
	Clear();
}

void Canvas::DrawCircle(int x, int y, int ray, char ch)
{
	for (int i = x - ray; i <= x + ray; i++)
	{
		for (int j = y - ray; j <= y + ray; j++)
		{
			if ((i - x) * (i - x) + (j - y) * (j - y) <= ray * ray)
			{
				SetPoint(i, j, ch);
			}
		}
	}
}

void Canvas::FillCircle(int x, int y, int ray, char ch)
{
	for (int i = x - ray; i <= x + ray; i++)
	{
		for (int j = y - ray; j <= y + ray; j++)
		{
			if ((i - x) * (i - x) + (j - y) * (j - y) < ray * ray)
			{
				SetPoint(i, j, ch);
			}
		}
	}
}

void Canvas::DrawRect(int left, int top, int right, int bottom, char ch)
{
	for (int j = top; j <= bottom; ++j)
	{
		canv[left][j] = ch;
		canv[right][j] = ch;
	}

	for (int i = left + 1; i < right; ++i)
	{
		canv[i][top] = ch;
		canv[i][bottom] = ch;
	}
		
}

void Canvas::FillRect(int left, int top, int right, int bottom, char ch)
{
	for (int i = left + 1; i < right; ++i)
	{
		for (int j = top + 1; j < bottom; ++j)
		{
			canv[i][j] = ch;
		}
	}
}

void Canvas::SetPoint(int x, int y, char ch)
{
	canv[x][y] = ch;
}

void Canvas::DrawLine(int x1, int y1, int x2, int y2, char ch)
{
	int x = x1;
	int y = y1;
	int dx = x2 - x1;
	int dy = y2 - y1;
	int P;
	float m = dy / dx;
	if (m < 1) {
	 P = 2 * dy - dx;
		while (x <= x2) {
			SetPoint(x, y, ch);
			x++;
			if (P < 0) {
				P = P + 2 * dy;
			}
			else {
				P = P + 2 * dy + 2 * dx;
				y++;
			}
		}
	}
	else {
		P = 2 * dx - dy;
		while (y <= y2) {
			SetPoint(x, y, ch);
			y++;
			if (P < 0) {
				P = P + 2 * dx;
			}
			else {
				P = P + 2 * dx + 2 * dy;
				x++;
			}
		}
	}
}

void Canvas::Print()
{
	for (int i = 0; i < w; ++i)
	{
		for (int j = 0; j < h; ++j)
		{
			std::cout << canv[i][j];
		}
		std::cout << '\n';
	}
}

void Canvas::Clear()
{
	for (int i = 0; i < w; ++i)
	{
		for (int j = 0; j < h; ++j)
		{
			canv[i][j] = ' ';
		}
	}
}
