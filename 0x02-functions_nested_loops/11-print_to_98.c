#include "main.h"

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
			_putchar(n + '0');
			_putchar(',');
			_putchar(' ');
		}
		else
		{
			_putchar(n + '0');
			_putchar('\n');
		}
	}
}
