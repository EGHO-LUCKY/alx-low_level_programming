#include "main.h"

/**
 * cap_string - converts the first letter of
 * every word in a string to uppercase
 * @s: string to be passed
 * Return: a string that satisfies the function
 */

char *cap_string(char *s)
{
	int i, j;
	char n[13] = {' ', '\t', '\n', ',', ';', '.',
				'!', '?', '"', '(', ')', '{', '}'};

	if (s[0] >= 'a' && s[0] <= 'z')
		s[0] -= 32;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; j < 13; j++)
		{
			if (s[i] == n[j] && (s[i + 1] >= 'a' && s[i + 1] <= 'z'))
				s[i + 1] -= 32;
		}
	}
	return (s);
}
