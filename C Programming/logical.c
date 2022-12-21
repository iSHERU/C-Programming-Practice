#include <stdio.h>

int main()
{
    int a = 1;
    int b = 1;
    printf("A && B is = %d\n", a && b);
    printf("A || B is= %d\n", a || b);
    printf("!A is = %d\n", !a);
    printf("!B is = %d\n\n\n", !b);

    a = 1;
    b = 0;
    printf("A && B is = %d\n", a && b);
    printf("A || B is= %d\n", a || b);
    printf("!A is = %d\n", !a);
    printf("!B is = %d\n\n\n", !b);

    a = 0;
    b = 1;
    printf("A && B is = %d\n", a && b);
    printf("A || B is= %d\n", a || b);
    printf("!A is = %d\n", !a);
    printf("!B is = %d\n\n\n", !b);

    a = 0;
    b = 0;
    printf("A && B is = %d\n", a && b);
    printf("A || B is= %d\n", a || b);
    printf("!A is = %d\n", !a);
    printf("!B is = %d\n", !b);

    return 0;
}