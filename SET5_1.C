#include<stdio.h>
#include<conio.h>
int main()
{
int n,i;
char a[20];
printf("Enter the string : ");
scanf("%s",&a);
printf("\n Enter how much times : ");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("\n%s",a);
}
return 0;
}
