//Practical 68_1
/*
Write a Program to draw a point
*/
#include <graphics.h> 
#include <stdio.h> 
int main() 
{
    int gd = DETECT, gm, color; 
    initgraph(&gd, &gm, "");   
    putpixel(100, 100, WHITE); 
    getch();  
    return 0;
}