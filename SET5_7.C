#include<stdio.h>
int main()
{
int a[10000],i,j,b,large,small;
scanf("%d",&b);
for(i=0;i<b;i++)
{
scanf("%d",&a[i]);
}
large=small=a[0];
  for(j=1;j<b;++j)
  {
    if(a[j]>large)
    large=a[j];
    if(a[j]<small)
    small=a[j];
     }
     printf("%d\t%d",small,large);
     return 0;
     }
     
