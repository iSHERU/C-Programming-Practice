#include <stdio.h>

int main()
{

    char name[100];
    printf("What's Your Name?:   ");
    scanf("%[^\n]%*c", &name);

    printf("Hello, %s.\n", name);
    return 0;
}