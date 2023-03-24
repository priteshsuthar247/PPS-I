//Practical 68_2
/*
Write a Program to draw an arc
*/
#include <graphics.h>
int main()
{
   int gd = DETECT, gm;
   int x = 250;
   int y = 250;
   int start_angle = 0;
   int end_angle = 90;
   int radius = 100;
   initgraph(&gd, &gm, "");
   arc(x, y, start_angle, end_angle, radius);
   getch();
   closegraph();
   return 0;
}