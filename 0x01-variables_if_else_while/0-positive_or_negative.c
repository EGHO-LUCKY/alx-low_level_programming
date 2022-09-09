#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Assigns a random number to int n and prints its value alongside some statements
 * return - Zero (0) when sucessful
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n>0)
		printf("%d is positive\n", n);
	else if (n==0)
		printf("%d is zero\n", n);
	else if (n<0)
		printf("%d is negative\n", n);
	return (0);
}
