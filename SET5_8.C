#include<stdio.h>
int main()
{
int a,b[20],i,c;
scanf("%d",&a);
if(a%2==0)
{
    printf("enter the odd number");
}
else
{
for(i=0;i<a;i++)
{
scanf("%d",&b[i]);
}
c=(a-1)/2;
printf("%d",b[c]);
}
return 0;
}

