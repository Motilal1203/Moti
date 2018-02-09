#include<stdio.h>
int main()

{
    
int time,hrs,min;
    
printf("enter time in minutes:");
    
scanf("%d",&time);
    
{
        
hrs=time/60;
 
min=time-(hrs*60);   
}
    
printf("%dhours%dminutes",hrs,min);
   

}
