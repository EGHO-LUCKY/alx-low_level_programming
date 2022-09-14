#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints numbers from n to 98
 * @n: starting number
 */

void print_to_98(int n)
{
	for (; n <= 98 ; n++)
	{
		if (n < 98)
		{
			putchar(n);
			putchar(',');
			putchar(' ');
		}
		else
		{
			putchar(n);
			putchar('\n');
		}
	}
}
