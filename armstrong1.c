#include <stdio.h>
#include <math.h>

int main()
{
    int n, p, s = 0, c = 0, x, d;

    printf("Enter a number: ");
    scanf("%d", &n);

    x = n;

    do 
    {
        p = n % 10;
        c++;        // Counts the number of digits and assigns to c
        n = n / 10;
    }
    while (n != 0);

    n = x;          // Restore the value of n

    do 
    {
        d = n % 10;
        s = s + pow (d, c);
        n = n / 10;
    }
    while (n != 0);

    if (s == x)
        printf("User entered armstrong number.\n");
    else 
        printf("Not an armstring number.\n");

    return 0;
}
