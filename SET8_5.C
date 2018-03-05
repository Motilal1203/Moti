#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char s[100];
int l;
scanf("%s",s);
l=strlen(s);
if(l%2==0)
{
s[(l/2)-1]='*';
s[l/2]='*';
}
else
{
s[(l/2)]='*';
}
printf("%s",s);
getch();
}
