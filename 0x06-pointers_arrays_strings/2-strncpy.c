#include "main.h"

/**
 * _strncpy - to copy strings
 * @dest: string to be copied to
 * @src: string copied
 * @n: number of characters that cn be added
 * Return: returns dest with the first chars copied from src
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i = 0, j;

	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	for ( ; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
