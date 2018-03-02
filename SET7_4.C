#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c;
    scanf("%d%d",&a,&b);
    c=a+b;
    if(c%2==0)
    {
        printf("the addition %d is even",c);
    }
    else 
    {
        printf("the addition %d is odd",c);
    }
    getch();
    
}
