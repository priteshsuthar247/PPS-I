//Practical 68_3
/*
Write a Program to draw a line
*/
#include <graphics.h>
int main()
{
	int gd = DETECT, gm;
	initgraph(&gd, &gm, "");
	line(150, 150, 450, 150);
	getch();
	closegraph();
}