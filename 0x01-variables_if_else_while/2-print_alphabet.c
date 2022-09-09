#include <stdio.h>
/**
 * main - outputs lowercase letters
 * Return: always 0
 */

int main(void)
{
	for (x = 'A'; x <= 'Z'; x++)
	{
		putchar(tolower(x));
	}
	return (0);
}
