#include <stdio.h>

int main()
{
    // Sorting
    
    int n,i;
    printf("Enter size of an array : ");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("\n Enter elements in Array : \n");
    for(i = 0 ; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
   
   // linear search
   
   int item,count=0;
   printf("which value you want to find : ");
   scanf("%d",&item);
   
   
   for(i =0 ;i<n ; i++)
   {
       
       if(item == arr[i])
       {
           printf("Item found at position %d\n",i+1);
           count++;
           //break;
       }
      
   }
   
   
   
   if(count>0)
   {
       printf("\n total Item founds %d ",count );
   }
   else{
       
       printf("Item not found ");
   }
    printf("\n");
    for(i=0 ;i<n ;i++)
    {
        printf("%d, ",arr[i]);
    }
    
    

    return 0;
}
