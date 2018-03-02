#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b=0,i;
    scanf("%d",&a);
    for(i=0;i<a;i++)
    {
    if(a==(i*7)) 
    {
        b=1;
        break;
    }
    }
    if(b==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    getch();
    }
