#include<stdio.h>
int main()
{
int b[50],n,i,j,a;
printf("Enter the number : ");
scanf("%d",&n);
printf("Enter intergers in array\n");
for(i=0;i<n;i++)
{
scanf("%d",&n);
}
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(b[i]>b[j])
{
a=b[i];
b[i]=b[j];
b[j]=a;
}
}
}
printf("The sorted array is:\n");
for(i=0;i<n;i++)
{
printf("%d\t",b[i]);
}
return 0;
}
