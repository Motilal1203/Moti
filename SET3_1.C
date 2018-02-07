#include<stdio.h>
void main()
{
    int a,b,d,c,i,sum=0;
    printf("Enter n value");
    scanf("%d",&d);
    printf("Enter the a & b value ");
    scanf("%d\n%d",&a,&b);
    c=a;
    printf("AP series");
    for(i=0;i<d;i++)
    {
        printf("\n%d",c);
        sum=sum+c;
        c=c+b;
    }
    printf("AP series %d",c);
}
