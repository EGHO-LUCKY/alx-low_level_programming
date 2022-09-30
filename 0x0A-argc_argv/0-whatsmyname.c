#include "main.h"
#include <stdio.h>

/**
 * main - prints name of program out
 *
 * @argc: number of args to be passed
 * @argv: array of arguments to be passed
 * Return: always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
