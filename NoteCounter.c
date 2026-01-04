#include <stdio.h>

int main()
{
    int amount;
    printf("Enter amount: ");
    scanf("%d", &amount);

    int notes2000, notes500, notes200, notes100, notes50, notes20, notes10;

    notes2000 = amount / 2000;
    amount %= 2000;

    notes500 = amount / 500;
    amount %= 500;

    notes200 = amount / 200;
    amount %= 200;

    notes100 = amount / 100;
    amount %= 100;

    notes50 = amount / 50;
    amount %= 50;

    notes20 = amount / 20;
    amount %= 20;

    notes10 = amount / 10;

    printf("2000 = %d\n", notes2000);
    printf("500 = %d\n", notes500);
    printf("200 = %d\n", notes200);
    printf("100 = %d\n", notes100);
    printf("50 = %d\n", notes50);
    printf("20 = %d\n", notes20);
    printf("10 = %d\n", notes10);

    return 0;
}
