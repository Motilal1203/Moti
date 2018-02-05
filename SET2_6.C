#include<stdio.h>

void main()
{ 
    int j,i,r,t;
    scanf("%d",&n);
    scanf("%d",&r);
    j++;
    while(j<r)
    {   t=0;
        for(i=2;i<j/2;i++)
        {
            if(j%i==0)
            {
                t=1;
                break;
            }
        }
        if(t==0)
        printf("%d",j);
        
        j++;
    }
   
}
