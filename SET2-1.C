#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
int a,b,c;
printf("Enter the number :");
scanf("%d",&a);
printf("\nEnter how much power of number do you want :");
scanf("%d",&b);
c=pow(a,b);
printf("The power of %d to the number %d is %d",b,a,c);
getch();
}
