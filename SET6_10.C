#include<stdio.h>
int main()
{
	int a=0,b=1,x,n,i;
	printf("\n enter the number of terms");
	scanf("%d",&n);
	printf("\n the fibonacci series is");
	for(i=0;i<n;i++)
	{
	printf("\n%d",a);
	x=a+b;
	a=b;
	b=x;
	}
	return 0;
}
