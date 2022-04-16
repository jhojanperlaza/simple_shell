#include "shell.h"
/**
 * main - simple shell
 *
 * Return: always 0.
 */
int main(void)
{
	char *buffer, **arg, *copy, *token;
	size_t bufsize = 0;
	int status = 0, cont = 0;

	do	{
		if (isatty(fileno(stdin)))
		{
			printf("simple_shell-> ");
		}
		if (getline(&buffer, &bufsize, stdin) == -1)
			return (-1);
		copy = strdup(buffer);
		if (!(token = strtok(copy, " \t\n")))
			continue;
		while (token != NULL)
		{
			token = strtok(NULL, " \t\n");
			cont++;
		}
		arg = get_arguments(buffer, cont);
		status = execute(arg);
	} while (!status);
	return (0);
}
