#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int n,i;
printf("string :");
scanf("%s",&a);
printf("no of times");
scanf("%d",&n);
for(i=0;i<n;i++)
{
printf("%c",a[i]);
}
getch();
}
