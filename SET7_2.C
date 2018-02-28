#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int i,l,b=0;
printf("string :");
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]!='0'&&a[i]!='1')
{
    printf("no");
    break;
}
else
{
    b++;
}
}
if(b==l)
{
    printf("yes");
}
getch();
}
