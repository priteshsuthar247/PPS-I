//Practical 26_3
/*
Write a program to print
55555
4444
333
22
1
*/
#include <stdio.h>
int main() 
{
  int i, j;
  for (i = 0; i < 5; i++) 
  {
    for (j = 0; j < 5 - i; j++) 
    {
      printf("%d ", 5 - i);
    }
    printf("\n");
  }
  return 0;
}