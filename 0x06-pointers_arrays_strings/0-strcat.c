#include "main.h"

/**
 * _strcat - to concatenate strings
 * @dest: string to be added to
 * @src: string added
 * Return: returns conatenated word
 */

char *_strcat(char *dest, char *src)
{
	int i, n = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[n++] = src[i];
	}
	return (dest);
}
