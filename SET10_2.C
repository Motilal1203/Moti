#include<stdio.h>
int main()
{
int z,i,a[10];
int sum=0;
printf("no.of elements:");
scanf("%d",&z);
printf("enter the elements:");
for(i=0;i<z;i++)
scanf("%d",&a[i]);
{
for(i=0;i<z;i++)
sum=sum+a[i];
printf("%d",sum);
}
return 0;
}
