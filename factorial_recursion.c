#include <stdio.h>

int factorial(int n)
{
  
  if (n == 0)
  {
    return 1;
  }

  return n * factorial(n-1);
}

int main()
{
  int num;

  printf("Enter Number: ");
  scanf("%d",&num);

  int result = factorial(num);

  printf("%d! = %d\n", num, result);

  return 0;
}