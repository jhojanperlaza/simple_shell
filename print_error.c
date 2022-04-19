
#include "shell.h"
/**
 * _strlen - this function returns the lenght of string
 * @s: is a string of input
 *
 * Return: len of the string.
 */
void print_error(char **name_file, char *copy, int cont)
{
	fprintf(stderr, "%s: %i: %s: not found", name_file[0], cont, copy);
	if (isatty(fileno(stdin)))
	{
		printf("\n");
	}
}
