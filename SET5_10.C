#include<stdio.h>
#include<math.h>
int main()
{
int a,b,c=0;
scanf("%d",&a);
for(b=1;b<a;b++)
{
if(pow(2,b)==a)
{
c=1;
}
}
if(c==1)
printf("\n YES");
else
printf("\n NO");
return 0;
}
