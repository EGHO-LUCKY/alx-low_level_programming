/**
 * swap_int - swaps numbers
 * @a: number to be swapped with b
 * @b: you already know
 */

void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
