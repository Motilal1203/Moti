#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c=1,i;
scanf("%d",&a);
while(a!=1)
{
a=a/2;
b++;
}
b=b+1;
for(i=0;i<b;i++)
{
c=c*2;
}
printf("%d",c);
getch();
}
