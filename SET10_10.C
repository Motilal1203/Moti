#include<stdio.h>
int main()
{
int n,i,b[10];
int mul=1;
printf("no.of elements:");
scanf("%d",&n);
printf("enter the elements:");
for(i=0;i<n;i++)
scanf("%d",&b[i]);
{
for(i=0;i<n;i++)
mul=mul*b[i];
printf("product \n%d",mul);
}
return 0;
}
