
#include "shell.h"
/**
 * print_error - print to error
 * @name_file: is the name of execute
 * @copy: is copy of buffer
 * @cont: is the counter of prompt
 */
int print_error(char **name_file, char *copy, int cont)
{
	fprintf(stderr, "%s: %i: %s: not found", name_file[0], cont, copy);
	if (isatty(fileno(stdin)))
	{
		printf("\n");
	}
	return (0);
}
