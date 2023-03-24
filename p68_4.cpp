//Practical 68_4
/*
Write a Program to draw a circle
*/
#include <graphics.h>
int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	circle(250, 200, 50);
	getch();
	return 0;
}
