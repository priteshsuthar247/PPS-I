//Practical 45
/*
Write a program to generate Fibonacci series using 
recursive function.
*/
#include<stdio.h>
int f1(int);
int main()
{
   int n, i = 0, c;
   printf("Enter : ");
   scanf("%d",&n);
   printf("First %d Fibonacci Numbers are : ",n);
   for ( c = 1 ; c <= n ; c++ )
   {
      printf("%d ", f1(i));
      i++; 
   }
   return 0;
}
int f1(int n)
{
   if ( n == 0 )
      return 0;
   else if ( n == 1 )
      return 1;
   else
      return ( f1(n-1) + f1(n-2) );
}
/*
Output :
        Enter : 10
        First 10 Fibonacci Numbers are : 0 1 1 2 3 5 8 13 21 34 
*/