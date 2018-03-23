#include<stdio.h>
void main()
{
int b,p,t;
float r;
printf("enter the principal amount");
scanf("%d",&p);
printf("enter the time period");
scanf("%d",&t);
printf("enter the rate");
scanf("%f",&r);
b=p *(1+r*t);
printf("%d",b);
}
