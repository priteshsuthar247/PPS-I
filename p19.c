//Practical 19
/*
Write a program to generate first n number of 
Fibonacci series
*/
#include<stdio.h>
int main()
{
	 int no, i=0, j=1, next, a;
	 printf("Enter : ");
	 scanf("%d", &no);
	
	 printf("First %d Fibonacci terms are: ", no);
	 for(a=1;a<=no;a++)
	 {
	  printf("%d ", i);
	  next = i + j;
	  i = j;
	  j = next;
	 }
	 return 0;
}
/*
Output :
		Enter : 10
		First 10 Fibonacci terms are: 0 1 1 2 3 5 8 13 21 34
*/