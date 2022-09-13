#include "main.h"

/**
 * print_alphabet_x10 - function that prints 10 times alphabet
 * Return: always 0.
 */

void print_alphabet_x10(void)
{
	int n, c;

	for (n = 1 ; n <= 10 ; n++)
	{
		for (c = 'a' ; c <= 'z' ; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
