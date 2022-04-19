#include "shell.h"
/**
 * main - simple shell
 *
 * Return: always 0.
 */
int main(void)
{
	char *buffer = NULL, **arg, *copy, *token;
	size_t bufsize = 0;
	int status = 0, cont = 0;

	do	{
		if (isatty(fileno(stdin)))
		{
			printf("simple_shell-> ");
		}
		if (getline(&buffer, &bufsize, stdin) == -1)
		{
			free(buffer);
			printf("\n");
			return (EXIT_FAILURE);
		}
		copy = strdup(buffer);
		token = strtok(copy, " \t\n");
		if (!token)
			continue;
		while (token != NULL)
		{
			token = strtok(NULL, " \t\n");
			cont++;
		}
		arg = get_arguments(buffer, cont);
		status = execute(arg, copy, buffer);
		free(copy);
		free(buffer);
		buffer = NULL;
	} while (!status);
	return (EXIT_FAILURE);
}
