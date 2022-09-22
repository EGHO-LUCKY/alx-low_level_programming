#include "main.h"

/**
 * leet - encrypts a string
 * @s: string to be passed
 * Return: a string that satisfies the function
 */

char *leet(char *s)
{
	int i, j;
	char n[] = "AaBbCcDdEeFfGgHhIiJjKkLlMmNnOoPpQqRrSsTtUuVvWwXxYyZz ";
	char m[] = "NnOoPpQqRrSsTtUuVvWwXxYyZzAaBbCcDdEeFfGgHhIiJjKkLlMm ";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; n[j] != ' '; j++)
		{
			if (s[i] == n[j])
				s[i] = m[j];
		}
	}
	return (s);
}
