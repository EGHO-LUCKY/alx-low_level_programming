#include "main.h"
#include <stdio.h>

/**
 * reverse_array - reverses the order of the array
 * @a: an array of integers
 * @n: the number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int i, j, k = n - 1;

	for (i = 0; i < n / 2; i++)
	{
		j = a[i];
		a[i] = a[k];
		a[k--] = j;
	}
}
