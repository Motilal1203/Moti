#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,i;
    char s;
    for(i=0;i<4;i++)
    {
        scanf("%d %c %d",&a,&s,&b);
        if(s='/')
        {
            printf("%d",a/b);
        }
        else
        {
            printf("%d",a%b);
        }
    }
}
