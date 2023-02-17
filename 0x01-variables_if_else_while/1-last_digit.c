#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* The string Last digit of, followed by
*n, followed by
*the string is, followed by
*if the last digit of n is greater than 5: the string and is greater than 5
*if the last digit of n is 0: the string and is 0
*if the last digit of n is less than 6 and not 0: the string and is less than 6 and not 0
*followed by a new line   */

int main(void)
{
	int n;
	int LastDigit;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/*Finding the last digit of  number */
	LastDigit = n % 10;
	/*Comparing the last digit with 6 and 5 and  */
	if (LastDigit<6 && LastDigit !=0)
		printf("Last digit of %d is %d and is less then 6 and not 0 \n",n,LastDigit);
	else if (LastDigit >5)
		printf("Last digit of %d is %d and is greater than 5 \n",n,LastDigit);
	else 
		printf("Last digit of %d is %d \n",n,LastDigit);
	
	return (0);
}
