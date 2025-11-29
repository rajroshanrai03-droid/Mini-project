#include <stdio.h>

int main()
{
    int number;

    printf("Enter an integer: ");

    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d is an even number.\n", number);
    }
    else
    {
        printf("%d is an odd number.\n", number);
    }

    if (number % 5 == 0)
    {
        printf("%d is divisible by 5.\n", number);
    }
    else
    {
        printf("%d is not divisible by 5.\n", number);
    }

    return 0;
}