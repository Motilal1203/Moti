#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[1000];
int l,i;
clrscr();
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i=i+2)
{
printf("%c",a[i]);
}
printf("\t");
for(i=1;i<l;i=i+2)
{
printf("%c",a[i]);
}
getch();
}
