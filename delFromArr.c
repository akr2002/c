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
   
    // delete any element from an array
    
    int pos;
    printf("Enter position position which you want to delete : ");
    scanf("%d",&pos); // 3
    // 34 55 67 98 23 62 0 
    
    for(i=pos-1;i<n; i++)
    {    //  67       98
        arr[i] = arr[i+1];
        
    }
    
    
 
    printf("\n After Deleting element form array \n");
    for(i=0 ;i<n  ;i++)
    {
        printf("%d, ",arr[i]);
    }
    
    

    return 0;
}
