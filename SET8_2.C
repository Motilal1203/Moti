#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int i,l,f=0;
scanf("%s",a);
l=strlen(a);
for(i=0;i<l;i++)
{
	if(a[i]=='a'||a[i]=='e'||a[i]=='i'||a[i]=='o'||a[i]=='u')
	{
	f=1;
	}
	else
  {
	f=0;
  }  
}
if(f==1)
{
	printf("yes");
}
else
{
	printf("no");
}
getch();
}
