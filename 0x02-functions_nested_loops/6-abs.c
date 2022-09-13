#include "main.h"

/**
 * _abs - computes the absolute value
 * @ab: integer
 * Return: absolute value
 */

int _abs(int ab)
{
	return (ab * ((ab > 0) - (ab < 0)));
}
