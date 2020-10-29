#include <stdio.h>



int main()

{

   

   printf("Taking class size as 80 and ratio of girls and boys in the class as 2:3\n");

   int x, m, r;

   printf("Enter rank of Savita:\n");

   scanf("%d",&r);

   again:

   printf("Enter value of no. of boys ahead Savita: \n");

   scanf("%d",&m);

   if(m<r)

   {

       x = m-r + 32; // x = m-r+ (2*80/2+5) and x is no. of girls behind savita

       printf("the number of girls behind Savita are: %d\n",x);

   }

   else

   {

       printf("There can be %d students in total and no. of boys could only be: %d",r,m-r);

       goto again;

   }

   return 0;

}
