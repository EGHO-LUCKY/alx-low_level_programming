#include "main.h"

/**
 * jack_bauer - prints every minute of the day
 */
void jack_bauer(void)
{
	char *ch = {00..23}:{00..59};

	while (*ch)
	{
		printf("%s", *ch);
		ch++;
	}
}
