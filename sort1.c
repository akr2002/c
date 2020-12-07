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
    
    // bubble Sorting
    
    int j;
    for(i = 0 ;i<n ;i++)
    {
        for(j=i+1; j<n;j++)
        {
            
            if(arr[i] > arr[j])
            {
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
            
        }
    }
    
    printf("\n");
    for(i=0 ;i<n ;i++)
    {
        printf("%d, ",arr[i]);
    }
    
    

    return 0;
}
