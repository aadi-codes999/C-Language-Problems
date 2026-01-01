#include <stdio.h>

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch); // space avoids newline issue

    if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z'))
    {
        printf("The character is an Alphabet.\n");
    }
    else
    {
        printf("The character is NOT an Alphabet.\n");
    }

    return 0;
}
