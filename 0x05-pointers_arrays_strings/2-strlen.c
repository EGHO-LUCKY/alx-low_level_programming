/**
 * _strlen - returns number of character in a string
 * @s: string to be passed
 * Return: return length
 */

int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
