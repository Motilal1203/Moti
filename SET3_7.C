#include <stdio.h>
#include<string.h>
int main() 
{
    char string[10];
    int flag=0,i;
    scanf("%s",string);
    int n=strlen(string);
    for(i=0;i<n;i++)
    {
        if(a[i]>='0'&&string[i]<='9')
        {
            flag=0;
        }
        else
        {
            flag=1;
            printf("no");
            break;
        }
    }
    if(flag==0)
    {
        printf("yes");
    }
    return 0;
}
