#include<stdio.h>
#include<conio.h>
int main()
{
int a,b,i,c=0;
scanf("%d",&a);
b=a/2;
for(i=0;i<b;i++)
{
    if(a%i==0)
    {
        c=1;
        break;
    }
}
if(c==0)
printf("yes");
else
printf("no");
return 0;
}
