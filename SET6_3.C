#include<stdio.h>
int main()
{
int a,b,c=0,i;
scanf("%d",&a);
for(i=1;a>10;i++)
{
b=a%10;
c=c+b;
a=a/10;
}
c=c+1;
printf("%d",c);
return 0;
}
