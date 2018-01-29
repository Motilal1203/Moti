#include <stdio.h>
 
void main()
{
    int i, num, sum = 0;
 
    printf("Enter an no. of integer numbers to be added \n");
    scanf ("%d", &num);
    for (i = 1; i <= num; i++)
    {
        sum = sum + i;
    }
    printf ("Sum of first %d natural numbers = %d\n", num, sum);
    getch();
}
