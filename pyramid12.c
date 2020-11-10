#include <stdio.h>

int main()
{
	int i = 0, j = 0, k = 0, l = 0;

	for (i = 0; i <=5 ; i++)
	{
	    
	    for(k=5;k>=i;k--)
	    {
	        printf(" ");
	        
	    }
	    
	    for(j=1; j<=2*i + 1;j++)
	    {
	       if(j==1 || (j==2*i + 1) )
	       {
	           printf("*");
	       }
	       else{
	           printf(" ");
	       }
	       
	        
	    }
	    	printf("\n");
	
	    
		}



	for (i = 5; i >=0 ; i--)
	{
	    
	    for(k=5;k>=i;k--)
	    {
	        printf(" ");
	        
	    }
	    
	    for(j=1; j<=2*i + 1;j++)
	    {
	       if(j==1 || (j==2*i + 1) )
	       {
	           printf("*");
	       }
	       else{
	           printf(" ");
	       }
	       
	        
	    }
	    	printf("\n");
	
	    
		}
		

	

	

 

return 0;
}
