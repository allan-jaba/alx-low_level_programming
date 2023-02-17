#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* The program generates a random n  outputs the number and determines whether the numbers is positive or negative or zero */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n<0)
	{
		printf("%d is negative \n",n);
	}	
	else if (n>0)
	{	
		printf("%d is positive \n",n);
	}	
	else
		printf("%d is zero\n",n);
	
	return (0);
}
