#include "main.h"

/**
 * string_toupper - converts any character ina string to uppercase
 * @s: string to be passed
 * Return: a string with all uppercase characters
 */

char *string_toupper(char *s)
{
	int i, j = 0;

	while (s[j] != '\0')
	{
		j++;
	}
	for (i = 0; i < j; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
