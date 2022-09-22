#include "main.h"

/**
 * leet - encrypts a string
 * @s: string to be passed
 * Return: a string that satisfies the function
 */

char *leet(char *s)
{
	int i, j;
	char n[5] = {'a', 'e', 'o', 't', 'l'};
	char m[5] = {'4', '3', '0', '7', '1'};

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 5; j++)
		{
			if (s[i] == n[j] || s[i] == (n[j] - 32))
				s[i] = m[j];
		}
	}
	return (s);
}
