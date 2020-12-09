#include <stdio.h>
#include<string.h>

int main()
{
 
 
 char str[]="this is my new topic, which relates to strings";
 
 int i,c_count=0, w_count=1, v_count=0;
 
 for(i=0;str[i]!='\0';i++)
 {
     ++c_count;
     
     
     if(str[i]==' ')
     {
         w_count++;
         
         
     }
     
     if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||  str[i] == 'o' ||  str[i] == 'o'  )
     {
         ++v_count;
         
         
     }
     else if(str[i]!=' ')
     {
         str[i]=str[i] - 32;
     }
     
      
         
     
     
     
     
 }
 
 
 printf("c_count = %d, w_count = %d, v_count = %d, \n",c_count,w_count,v_count);
    
    
    puts(str);
    

    return 0;
}
