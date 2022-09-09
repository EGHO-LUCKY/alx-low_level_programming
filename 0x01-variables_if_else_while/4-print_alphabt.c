#include <stdio.h>

/**
 * main - outputs string except q and e
 * Return: always 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e');
		else
			putchar(x);
	}
	putchar('\n');
}
