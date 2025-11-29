#include <stdio.h>

int main()
{
    int length, width;
    int area, perimeter;

    printf("Enter the length of the rectangle: ");

    scanf("%d", &length);

    printf("Enter the width of the rectangle: ");

    scanf("%d", &width);

    area = length * width;

    perimeter = 2 * (length + width);

    printf("The area of the rectangle is: %d\n", area);

    printf("The perimeter of the rectangle is: %d\n", perimeter);

    return 0;
}