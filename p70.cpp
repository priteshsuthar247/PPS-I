//Practical 70
/*
Write a Program to fill polygons.
*/
#include <graphics.h>
int main()
{
	int gd = DETECT, gm;
	int arr[] = {320, 150, 400, 250,
				 250, 350, 320, 150};
	initgraph(&gd, &gm, "");
	fillpoly(4, arr);
	getch();
	closegraph();
	return 0;
}
