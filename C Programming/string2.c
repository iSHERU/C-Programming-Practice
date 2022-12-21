#include <stdio.h>

int main()
{
    char a;
    char b[100], c[100];

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */

    scanf("%c %s %[^\n]%*c", &a, &b, &c);

    printf("%c\n%s\n%s\n", a, b, c);
    return 0;
}