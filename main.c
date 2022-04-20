#include "shell.h"
/**
 * main - simple shell
 * @name_file: is the name of file executable
 * @ac: is the number of arguments
 * Return: always 0.
 */
int main(int ac __attribute__((unused)), char **name_file)
{
	char *buffer = NULL, **arg, *copy, *token;
	size_t bufsize = 0;
	int status = 0, cont = 0, cont_prom = 1;

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
		{
			cont_prom++;
			continue;
		}
		while (token != NULL)
		{
			token = strtok(NULL, " \t\n");
			cont++;
		}
		arg = get_arguments(buffer, cont);
		status = execute(arg, copy, buffer, name_file, cont_prom);
		free(copy);
		free(buffer);
		buffer = NULL;
		cont_prom++;
	} while (1 || !status);
	return (EXIT_SUCCESS);
}
