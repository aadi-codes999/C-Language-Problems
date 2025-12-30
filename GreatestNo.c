#include <stdio.h>
int main()
{
    int a, b, c;
    a = 10, b = 20, c = 30;
    if (a > b && b > c)
        printf("a is the greatest");
    else if (a < b && b > c)
        printf("b is the greatest");
    else
        printf("c is the greatest");

    return 0;
}