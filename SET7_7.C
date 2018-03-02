#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i;
    scanf("%d",&a);
    b=a;
    for(i=a;i<=(a*10);i++)
    {
        if(i%10==0)
        {
            printf("%d",i);
            break;
        }
    }
        getch();
    }
