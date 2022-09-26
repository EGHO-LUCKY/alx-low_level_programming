#include <stdio.h>

/**
 * _strpbrk - locates a char from a string
 * @s: string to be searched
 * @accept: string searched
 * Return: return address for result
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j;

	for (i = 0; *s != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
			{
				return (s);
			}
		}
		s++;
	}
	return ('\0');
}
