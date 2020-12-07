#include <stdio.h>

int main()
{
    // binary search
    
    int n,i;
    printf("Enter size of an array : ");
    scanf("%d",&n);
    
    int arr[n];
    
    printf("\n Enter elements in Array : \n");
    for(i = 0 ; i<n; i++)
    {
        scanf("%d",&arr[i]);
    }
   
   int item,beg=0,end=n-1,mid=0;
   
   printf("Item which you want to find ");
   scanf("%d",&item);
   
   int count=0;
   
   while(end>beg)
   {
       mid = (beg+end)/2;
       
       if(arr[mid] == item)
       {
           count++;
           printf("item found ");
           break;
       }
       
       if(arr[mid]> item)
       {
           end = mid -1;
       }
       if(arr[mid] < item )
       {
           beg = mid + 1;
       }
       
   }
 
 if(count==0)
 {
     printf("Item not found");
 }


    return 0;
}
