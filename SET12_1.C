#include<stdio.h>
#include<conio.h>
void main()
{
int a,c=0,i;
scanf("%d",a);
for(i=0;a>=10;i++)
{
c++;
a=a/10;
}
c=c+1;
printf("%d",c);
getch();
}
