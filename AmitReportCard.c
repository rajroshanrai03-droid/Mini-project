#include <stdio.h>

int main()
{
    int n, i;
    int max_marks, min_marks, current_mark;

    scanf("%d", &n);

    if (n > 0)
    {
        scanf("%d", &current_mark);
        max_marks = current_mark;
        min_marks = current_mark;
    }
    else
    {

        return 0;
    }

    for (i = 1; i < n; i++)
    {
        scanf("%d", &current_mark);

        if (current_mark > max_marks)
        {
            max_marks = current_mark;
        }

        if (current_mark < min_marks)
        {
            min_marks = current_mark;
        }
    }

    printf("Highest = %d\n", max_marks);
    printf("Lowest = %d\n", min_marks);

    return 0;
}
