#include<stdio.h>
int main() 
{
int a,b,c;
printf("\n Enter two numbers:");
scanf("%d%d",&a,&b);
c=a;
a=b;
b=c;
printf("\n After Swapping :%d %d",a,b);
return 0;
}
