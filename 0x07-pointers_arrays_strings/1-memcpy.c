#include "main.h"

/**
 * _memcpy - copies from one address to the other
 * @dest: destination to be copied into
 * @src: src to be copieed from
 * @n: number of characters to be copied
 * Return: return value
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
