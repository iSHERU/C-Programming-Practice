#include <stdio.h>

int main(void)
{
	int locker[100], i, k, closed = 0, opened = 0;

	for(i=0; i<100; i++)
	{
		if (i%2 == 0)
		{
			locker[i] = 1;
		}
		else
		{
			locker[i] = 0;
		}
		
  		for(i=3; i<101; i++)
    	{
    		for (k=i; k<101;k+=i) 

    		locker[i-1] ^= 1;
    	}
   }

	for(i=0; i<100; i++)
	{
    	if(locker[i] == 0)
		{
			closed = closed + 1;
		}
    	else 
		{
			opened = opened + 1;
		}
	}


	printf("opened locker %d\nclosed locker %d", opened, closed);
	return 0;
}