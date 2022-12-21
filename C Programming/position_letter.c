#include <stdio.h>
int main()
{
    char letter;
    printf("Enter English Letter: ");
    scanf("%c", &letter);
    if (letter >= 'A' && letter <= 'Z')
    {
        printf("Position in Upper_Case letters is: %d", letter - 'A' + 1);
    }
    if (letter >= 'a' && letter <= 'z')
    {
        printf("Position in Lower_Case letters is: %d", letter - 'a' + 1);
    }
    else{
        printf("It is not a Alphabet.");
    }

    return 0;
}