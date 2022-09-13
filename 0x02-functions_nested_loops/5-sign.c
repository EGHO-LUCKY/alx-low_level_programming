#include "main.h"

/**
 * print_sign - prints the sign of a number
 * @n: a number
 * Return: 1 if +, 0 if 0, -1 if -
 */

int print_sign(int n)
{
	if (n > 0)
		_putchar('+');
	else if (n == 0)
		_putchar('0');
	else
		_putchar('-');
}