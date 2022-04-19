#include "shell.h"
/**
* fun_env - prints the current environment
* @arguments: string of get arguments
* @copy: is copy of buffer
* @buffer: is a string of getline
* Return: The variable status or Error.
*/

int fun_env(char **arguments, char *copy, char *buffer)
{
	char **env = environ;

	if (!arguments || !copy || !buffer)
		return (-1);

	while (*env)
	{
		printf("%s\n", *env);
		env++;
	}
	return (1);
}