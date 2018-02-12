#include<stdio.h>
int main()
{
	int a=0,b=1,z,n,i;
	printf("\n enter the number of terms");
	scanf("%d",&n);
	printf("\n the fibonacci series is");
	for(i=0;i<n;i++)
	{
	printf("\n%d",a);
	z=a+b;
	a=b;
	b=z;
	}
	return 0;
}
