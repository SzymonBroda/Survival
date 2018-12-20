#include <iostream>
#include "Classes.h"

using namespace std;

//--------------mapy itd
Map::Map(int h, int w)//domyslnie h = 20; w = 50 
{
	height = h;
	width = w;
}

Point::Point(int x1, int y1) // domyslnie 0, 0
{
	x = x1;
	y = y1;
}
void Point::set(int x1, int y1)// domyslnie y1 = -1
{
	//dodac sprawdzenie czy x1 lub y1 nie przekraczaja rozmiaru mapy!!!!
	if(x1 < 0 || y1 < 0)// jesli x1 lub y1 < 0, to losowanie
	{
		
	}
	else
	{
		x = x1;
		y = y1;
		
	}
}
//--------------- stworzenia
