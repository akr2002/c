#include<stdio.h>

// 100 to 999 ->  10 mins

// 10 to 9999  




void main()
{
    
    int arm=0, i,b;
    

  
  for(i=100;i<999;i++)
  {
    b=i;
    arm=0;
    
    while(b!=0)
    {
        int rem = b%10;
        arm = arm + rem* rem* rem;
        b/=10;
    }
    
    if(i==arm)
    {
        printf("Its an armstrong no %d \n",arm);
            }
    
  }
   
}
