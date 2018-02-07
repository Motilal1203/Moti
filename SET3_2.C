#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,j,d[50];
clrscr();
printf("Enter the array of intergers : ");
scanf("%d",&a);
for(i=0;i<=a;i++)
{
d[i]=i+1;
printf("%d\n",d[i]);
}
for(j=0;j<=a;j++)
for(i=1;i<=a;i++)
{
if(d[i]>d[j])
{
printf("%d",d[i]);
}
}

getch();
}
