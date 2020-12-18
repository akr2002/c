#include<stdio.h>

int main()
{
     int number, sum = 0, i = 1;

     printf("Enter a number: ");
     scanf("%d",&number);

     while(i<number)
     {
           if(number%i==0)
           {
               sum=sum+i;
           }
           ++i;
     }

     if(sum == number)
     {
          printf("%d is a perfect number\n",i);
     }
      
     else printf("%d is not a perfect number\n",i);

     return 0;
}
