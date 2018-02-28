#include<stdio.h>
int main() 
{
int z,b,c;
printf("\n Enter two numbers:");
scanf("%d%d",&z,&b);
c=z;
z=b;
b=c;
printf("\n After Swapping :%d %d",z,b);
return 0;
}
