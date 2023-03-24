//Practical 67
/*
C Program to merge contents of two files into a third file
 */
#include <stdio.h>
#include <stdlib.h>
int main()
{
    FILE *fp1 = fopen("f1.txt", "r"),
         *fp2 = fopen("f2.txt", "r"),
         *fp3 = fopen("f3.txt", "w");
    char c;
    if (fp1 == NULL || fp2 == NULL || fp3 == NULL)
    {
        puts("Could not open files");
        exit(0);
    }
    while ((c = fgetc(fp1)) != EOF)
    {
        fputc(c, fp3);
    }
    while ((c = fgetc(fp2)) != EOF)
    {
        fputc(c, fp3);
    }
    printf("Merged f1.txt and f2.txt into f3.txt");
    fclose(fp1);
    fclose(fp2);
    fclose(fp3);
    return 0;
}
/*
Output :
        Merged f1.txt and f2.txt into f3.txt
*/
