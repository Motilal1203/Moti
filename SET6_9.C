#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,b=0;
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
b=a[0];
for(i=0;i<10;i++)
{
if(a[i]>b)
b=a[i];
}
printf("greatest %d",b);
getch();
}
