#include<stdio.h>
#include<conio.h>
void main()
{
int a,i,m,var=0;
scanf("%d",&a);

  m=a/2;
for(i=2;i<=m;i++)
{
if(a%i==0)
{
var=1;
break;
}
}
if(var==0)
printf("\n no");
else
printf("\n yes");
getch();
}
