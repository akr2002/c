#include <stdio.h>

int main()
{
 
 // max nd min which is present in array
    int n,i,max,min;
    
    printf("Enter Size, how many elements you want ");
    scanf("%d",&n);
    
    int arr[n];
    
   for(i=0;i<n;i++)
   {
    scanf("%d",&arr[i]);
   
   }
   
   min = arr[0];
   max = arr[0];
   
   printf("\noutput:-\n");
    for( i=0;i<n;i++)
    {
     
     if(max < arr[i])
     {
         max = arr[i];
     }
     
     if(min > arr[i])
     {
         min = arr[i];
     }
        
    }
    
    printf("min = %d, max = %d\n",min,max);
    return 0;
}
