#include "main.h"

/**
 *  _strstr - finds the first occurence of a sub string
 *  in a string
 *  @haystack: string to be searched
 *  @needle: string serached
 *  Return: a pointer to the string
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}
		if (!needle[j])
			return (&haystack[i]);
	}
	return ('\0');
}
