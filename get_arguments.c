#include "shell.h"
/**
 * get_argumentos - Takes the arguments of the main
 * @buffer: arguments of the main
 * @cont: number of arguments
 * Return: the variable tokens what are the arguments.
 */
char **get_arguments(char *buffer, int cont)
{
	int i = 0;
	char **array_strings = malloc(cont + 1 * sizeof(char *));

	char *token = strtok(buffer, " \n");

	while (token != NULL)
	{
		array_strings[i] = token;
		i++;
		token = strtok(NULL, " \n");
	}
	array_strings[i] = NULL;
	return (array_strings);
}
