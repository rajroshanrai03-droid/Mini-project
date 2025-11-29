#include <stdio.h>
#include <string.h>

int main()
{
    char word[100];
    int i, j, is_palindrome = 1;

    printf("Enter a word: ");
    scanf("%s", word);

    int length = strlen(word);

    for (i = 0, j = length - 1; i < j; i++, j--)
    {
        if (word[i] != word[j])
        {
            is_palindrome = 0; // Not a palindrome
            break;
        }
    }

    if (is_palindrome)
    {
        printf("Perfect Secret Word\n");
    }
    else
    {
        printf("Not a Secret Word\n");
    }

    return 0;
}