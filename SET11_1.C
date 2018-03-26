#include<stdio.h>
int main()
{
char a[10];
clrscr();
int i,b,n,c=0;
printf("enter string:\n");
scanf("%s",&a);
printf("enter the number:\n");
scanf("%d",&b);
n=strlen(a);
for(i=n-1;i>=0;i--)
{
printf("%c",a[i]);
c++;
if(b==c)
{
    break;
}
}
return 0;
}
