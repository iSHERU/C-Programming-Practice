#include <stdio.h>
int main()
{
    int num, a, b, c, d, e;

    printf("Enter a five digit number : ");
    scanf("%d", &num);

    a = num % 10;
    num /= 10;

    b = num % 10;
    num /= 10;

    c = num % 10;
    num /= 10;

    d = num % 10;
    num /= 10;

    e = num % 10;

    num = (e * 10000) + (d * 1000) + (c * 100) + (b * 10) + (a * 1);

    printf("%d is the sum of the digits of the number %d.", a + b + c + d + e, num);

    return 0;
}