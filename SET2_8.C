#include<stdio.h>
#include<math.h>

void main()
{ 
    int m,s=0,r,t,p=0,n;
    scanf("%d",&m);
    scanf("%d",&n);
    
    while(m<n)
    {
        t=m;
        
        while (m!=0)
        {
            m /= 10;
            p++;
        }
        m=t;
        
        while(m>0)
        {
            r=m%10;
            s+=pow(r,p);
            m/=10;
        }
    
        if(t==s)
        printf("%d",s);
        
        m=++t;
    }
    
}
