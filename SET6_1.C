#include<stdio.h>
int main()
{
int a,b,c[100],i=0,d;
scanf("%d",&a);
while(a!=0)
{
b=a%10;
c[i]=b;
a=a/10;
i++;
d++;
}
for(i=--d;i>=0;i--)
{
printf("%d\t",c[i]);
}
return 0;
}
