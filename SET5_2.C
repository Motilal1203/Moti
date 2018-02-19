#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s1[50],s2[50];
int a,b;
printf("enter the two strings : \n");
scanf("%s%s",&s1,&s2);
a=strlen(s1);
b=strlen(s2);
if(a>=b)
{
printf("%s",s1);
}
else
{
printf("%s",s2);
}
getch();
}
