//Practical 69_1
/*
Write a Program to draw a rectangle
*/
#include <graphics.h>
int main()
{
	int gd = DETECT, gm;
	int left = 150, top = 150;
	int right = 450, bottom = 450;
	initgraph(&gd, &gm, "");
	rectangle(left, top, right, bottom);
	getch();
	closegraph();
	return 0;
}
