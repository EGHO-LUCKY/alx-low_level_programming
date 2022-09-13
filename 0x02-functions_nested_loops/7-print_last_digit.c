#include "main.h"

/**
 * print_last_digit - prints the last digit
 * @r: number
 * Return: value of the last digit
 */

int print_last_digit(int r)
{
	int num = _abs(r % 10);

	_putchar(num + '0');
	return (num);
}
