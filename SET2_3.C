#include<stdio.h>
void main()
{
int i,n,m,var=0;
printf("\n enter a number:");
sacnf("%d",&n);
  m=n/2;
for(i=2;i<=m;i++)
{
if(n%i==0)
{
var=1;
break;
}
}
if(var==0)
printf("\n the given is prime");
else
printf("\n the given number is not a prime number");
getch();
}
