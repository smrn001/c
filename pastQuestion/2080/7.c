#include <stdio.h>
#include <string.h>

int main()
{

    char original[20], copy[20], temp;
    int length;

    printf("Enter a word : ");
    scanf("%s", original);

    strcpy(copy, original);
    length = strlen(original);

    for (int i = 0; i < length / 2; i++)
    {
        temp = original[i];
        original[i] = original[length - 1 - i];
        original[length - 1 - i] = temp;
    }

    if (strcmp(original, copy) == 0)
        printf("Palindrome\n");
    else
        printf("Not palindrome ");

    return 0;
}