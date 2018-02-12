#include<stdio.h>
#include<conio.h>
int main()
{
int a[20],i,m=0;
printf("Enter the 10 numbers :");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
if(a[i]>m)
{
m=a[i];
}
else
{
}
}
printf("The largest amoung 10 numbers is %d",m);
return 0;
}
