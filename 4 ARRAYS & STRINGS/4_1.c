//Practical 27
/*
Write a C program to read and 
store the roll no and marks of 20 students using an array. 
*/
#include <stdio.h>
int main() 
{
  int r[20], m[20], i;
  for (i = 0; i < 20; i++) 
  {
    printf("Enter Roll No & Marks : ");
    scanf("%d", & r[i]);
    scanf("%d", & m[i]);
  }
  for (i = 0; i < 20; i++) 
  {
    printf("\nStudent : [%d]   Roll No :  %d   Marks : %d", i+1, r[i], m[i]);
  }
  return 0;
}
/*
Output :
        Enter Roll No & Marks : 1       1
        Enter Roll No & Marks : 2       2
        Enter Roll No & Marks : 3       3
        Enter Roll No & Marks : 4       4
        Enter Roll No & Marks : 5       5
        Enter Roll No & Marks : 6       6
        Enter Roll No & Marks : 7       7
        Enter Roll No & Marks : 8       8
        Enter Roll No & Marks : 9       9
        Enter Roll No & Marks : 10      10
        Enter Roll No & Marks : 11      11
        Enter Roll No & Marks : 12      12
        Enter Roll No & Marks : 13      13
        Enter Roll No & Marks : 14      14
        Enter Roll No & Marks : 15      15
        Enter Roll No & Marks : 16      16
        Enter Roll No & Marks : 17      17
        Enter Roll No & Marks : 18      18
        Enter Roll No & Marks : 19      19
        Enter Roll No & Marks : 20      20

        Student : [1]   Roll No :  1   Marks : 1
        Student : [2]   Roll No :  2   Marks : 2
        Student : [3]   Roll No :  3   Marks : 3
        Student : [4]   Roll No :  4   Marks : 4
        Student : [5]   Roll No :  5   Marks : 5
        Student : [6]   Roll No :  6   Marks : 6
        Student : [7]   Roll No :  7   Marks : 7
        Student : [8]   Roll No :  8   Marks : 8
        Student : [9]   Roll No :  9   Marks : 9
        Student : [10]   Roll No :  10   Marks : 10
        Student : [11]   Roll No :  11   Marks : 11
        Student : [12]   Roll No :  12   Marks : 12
        Student : [13]   Roll No :  13   Marks : 13
        Student : [14]   Roll No :  14   Marks : 14
        Student : [15]   Roll No :  15   Marks : 15
        Student : [16]   Roll No :  16   Marks : 16
        Student : [17]   Roll No :  17   Marks : 17
        Student : [18]   Roll No :  18   Marks : 18
        Student : [19]   Roll No :  19   Marks : 19
        Student : [20]   Roll No :  20   Marks : 20
*/