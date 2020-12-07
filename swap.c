
#include <stdio.h>
int main()
{
    int x = 0, y = 0;

    printf("Enter two integers: ");
    scanf("%d%d", &x, &y);
 
    x = x + y; 
    y = x - y;
    x = x - y;
 
    printf("After Swapping: x = %d, y = %d", x, y);
 
    return 0;
}
