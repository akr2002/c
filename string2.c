#include <stdio.h>
#include<string.h>

int main()
{
 
 
 char str[]="this is my new topic, which relates to Strings";
 
 int i,c_count=0, w_count=1;
 
 for(i=0;str[i]!='\0';i++)
 {
     ++c_count;
     
     
     if(str[i]==' ')
     {
         w_count++;
         
         
     }
     
     
     
 }
 
 
 printf("c_count = %d, w_count = %d ",c_count,w_count);
    
 printf("\n");

 for (i = 0; str[i] != '\0'; ++i)
 {
 	if (str[i] == ' ')
	{
		printf("\n");
		continue;
	}
	else printf("%c", str[i]);
 }	 
    

    return 0;
}
