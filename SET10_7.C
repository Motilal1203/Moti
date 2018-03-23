#include<stdio.h>
int main(void)
{
int n,i,R=0,rem=0;
scanf("%d",&n);
while(n!=0)
{
    rem=n%10;
    r=(r*10)+rem;
    n=n/10;
}
printf("%d",r);
}
