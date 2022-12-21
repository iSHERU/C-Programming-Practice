#include <stdio.h>

int main(void)
{
  char c;
  char upper_c;

  printf("Please enter a string: ");

  c = getchar();

while (c != '\n' && c >= 0)
{
    if (c >= 'a' && c <= 'z')
      upper_c = c - 'a' + 'A';

    else
      upper_c = c;

    /* Print the converted character. */
    putchar(upper_c);

	/* Get the next character */
	c = getchar();
  }
  
  putchar('\n');
}