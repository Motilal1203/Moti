#include<stdio.h>
void main()
{
int i,n,flag=0;
printf("\n enter the value of n");
scanf("%d",&n);
for(i=1;i<=n/2;++i)
{
if(n%i==0)
{
flag=1;
break;
}
if(flag==0)
printf("\n yes");
}
if(flag==1)
{
printf("\n no");
}
getch();
}
