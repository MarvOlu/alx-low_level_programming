#include <stdio.h>

int main (void)
{
	
	int n;

	srand(time(0));
	n =rand() - RAND_MAX / 2;
	if (n>0)
	{
		puts("%d is positive \n",n);
	}
	else if(n<0)
	{
		puts("%d is negative\n" ,n);
	}
	else
		puts("%d is zero\n", n);
	}
        

	return (0);
}

