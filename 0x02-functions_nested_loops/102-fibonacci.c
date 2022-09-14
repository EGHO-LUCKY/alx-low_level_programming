#include <stdio.h>
/**
 * main - first 50 fibonacci numbers
 * Return: always 0
 */

int main(void)
{
	unsigned long int a, b, c;
	int i;

	a = 0;
	b = 1;
	for (i = 1; i <= 50; i++)
	{
		c = a + b;
		if (i != 50)
			printf("%lu, ", c);
		else
			printf("%lu", c);
		a = b;
		b = c;
	}
	printf("\n");
	return (0);
}
