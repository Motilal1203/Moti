#include<stdio.h>
void main()
{
    int z,b,gcd,i;
    scanf("%d %d",&z,&b);
    for(i=1;i<=z&&i<=b;i++)
    {
        if(z%i==0&&b%i==0)
        {
            gcd=i;
        }
    }
    printf("%d",gcd);
}
