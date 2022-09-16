#include "main.h"

/**
 * print_triangle - a function that prints a triangle
 * @size: size of the triangle
 * Return: triangle of '#'s
 */

void print_triangle(int size)
{
	int i, j;
	int a = 0;

	if (size > 0)
	{
		for (i = size ; i != 0 ; i--)
		{
			a++;
			for (j = 1 ; j < i ; j++)
			{
				_putchar(' ');
			}
			for (j = 0 ; j < a ; j++)
				_putchar('#');
			_putchar('\n');
		}

	}
	else
		_putchar('\n');
}
