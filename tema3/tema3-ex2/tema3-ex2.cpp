#include <iostream>
#include "Canvas.h"

int main()
{
	int width, height;
	Canvas c(20, 20);
	c.DrawCircle(14, 12, 3, '*');
	c.FillCircle(14, 12, 3, 'c');
	c.DrawRect(2, 11, 8, 14, '$');
	c.FillRect(2, 11, 8, 14, '$');
	c.DrawLine(3, 1, 4, 4, '@');
	c.Print();
	return 0;
}

