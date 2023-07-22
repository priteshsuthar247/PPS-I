//Practical 26_4
/*
Write a program to print
1 
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/
#include <stdio.h>
int main() 
{
  int i, j;
  for (i = 0; i < 5; i++) 
  {
    for (j = 0; j < i+1; j++) 
    {
      printf("%d ",i+1);
    }
    printf("\n");
  }
  return 0;
}