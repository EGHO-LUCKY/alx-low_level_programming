#include "main.h"

/**
 * _strncat - to concatenate strings
 * @dest: string to be added to
 * @src: string added
 * @n: number of characters that cn be added
 * Return: returns conatenated word
 */

char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < n && src[j] != '\0'; j++)
	{
		dest[i++] = src[j];
	}
	return (dest);
}
