#include <stdio.h>
int main(void)
{
	int i, j, last;
	int found = 0; /* This indicates whether we found the largest prime */

	printf("enter a number\n");
	scanf("%d", &last);
	i = last;
	while (!found) /* Loop until we find our guy */
	{
		for(j = 2 ; j <= i; j++)
		  if (i % j == 0)
		    break;
		
		if (j > i) /* If this is true then i is prime */
		  found = 1;
		else
		  i--;
	}
	printf("The largest prime not larger than %d is %d.\n", last, i);
	return 0;
}