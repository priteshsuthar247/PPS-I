//Practical 69_2
/*
Write a Program to draw a polygon
*/
#include <graphics.h>
int main()
{
	int gd = DETECT, gm;
	int arr[] = {320, 150, 400, 250,
				250, 350, 320, 150};
	initgraph(&gd, &gm, "");
	drawpoly(4, arr);
	getch();
	closegraph();
	return 0;
}
