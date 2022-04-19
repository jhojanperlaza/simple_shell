#include "shell.h"
/**
 * execute - execute the function
 * @arguments: string of get arguments
 * @copy: is copy of buffer
 * @buffer: is a string of getline
 * Return: The variable status or Error.
 */
int execute(char **arguments, char *copy, char *buffer)
{
	int status = 0, (*f)(char **comand, char *copy, char *buffer);
	pid_t pid;
	char *string_exe;
	struct stat st;
	bool is_alias = false;

	if (!arguments[0])
		return (EXIT_FAILURE);

	f = match_fun(arguments[0]);
	if (f)
	{
		f(arguments, copy, buffer);
		free(arguments);
		return (0);
	}
	if (stat(arguments[0], &st) == -1) /**si argv[0] es un alias **/
	{
		string_exe = get_PATH(arguments[0]);
		arguments[0] = string_exe;
		is_alias = true;
	}
	pid = fork();
	if (pid == 0)
	{
		if (execve(arguments[0], arguments, NULL) == -1)
			perror("Error:");
	}
	else
	{
		wait(&status);
		if (is_alias == true)
			free(string_exe);
		free(arguments);
	}
	return (status);
}
