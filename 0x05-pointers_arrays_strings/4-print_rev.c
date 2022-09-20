#include "main.h"
/**
 * print_rev - prints in reverse
 * @s: strinfg to be reversed
 */

void print_rev(char *s)
{
	int i, j, k;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	j = i;

	for (k = j - 1; k >= 0; k--)
	{
		_putchar(s[k]);
	}
	_putchar('\n');
}
