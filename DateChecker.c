#include <stdio.h>

int main()
{
    int d, m, y, valid = 1;

    printf("Enter date (DD MM YYYY): ");
    scanf("%d %d %d", &d, &m, &y);

    if (y < 1 || m < 1 || m > 12 || d < 1)
        valid = 0;
    else if (m == 2)
    {
        if ((y % 400 == 0) || (y % 4 == 0 && y % 100 != 0))
        {
            if (d > 29)
                valid = 0;
        }
        else
        {
            if (d > 28)
                valid = 0;
        }
    }
    else if (m == 4 || m == 6 || m == 9 || m == 11)
    {
        if (d > 30)
            valid = 0;
    }
    else
    {
        if (d > 31)
            valid = 0;
    }

    if (valid)
        printf("Date is valid\n");
    else
        printf("Date is invalid\n");

    return 0;
}
