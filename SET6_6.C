#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100],i,l,b=0,c=0;
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]>='a' && a[i]<='z') 
b++;
if(a[i]>='0' && a[i]<='9')
c++;
}
if(b!=0 && c!=0)
printf("contains both numbers and alphabets");
else
printf("no");
getch();
}
