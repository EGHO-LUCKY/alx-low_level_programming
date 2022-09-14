#include <stdio.h>

/**
 * main - causes an infinite loop
 * Return: 0
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	/* Start an infinite loop */
	i = 0;
	/*
	while (i < 10)
	{
		putchar(i);
	} 
	*/ 
	printf("Infinite loop avoided! \\o/\n");
	/* Return: always 0 */
	return (0);
}
