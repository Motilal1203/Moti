#include<stdio.h>
int main()
{
int c,e;
scanf("%d,%d",&c,&e);
c=c^e;
e=c^e;
c=c^e;
printf("After swapping:%d,%d",c,e);
return 0;
}
