#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @r: number
 * Return: value of the last digit
 */

int print_last_digit(int r)
{
	int num = r % 10;

	if (num < 0)
		num *= -1;
	_putchar(num + '0');
	return (num);
}
