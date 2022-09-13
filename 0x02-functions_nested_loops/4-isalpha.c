#include "main.h"

/**
 * _isalpha - checks for alphabet character
 * @c: single character
 * Return: 1 if c is alphabet, else 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
