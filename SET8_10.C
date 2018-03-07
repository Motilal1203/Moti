#include<stdio.h>
#include<conio.h>
void main()
{
    char a[100];
    int i,l;
    scanf("%s",a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if(a[i]%2!=0)
        {
            printf("%c ",a[i]);
        }
    }
    getch();
}
