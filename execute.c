#include "shell.h"
/**
 * execute - execute the function
 * @argv: string of get arguments
 * Return: The variable status or Error.
 */
int execute(char **argv)
{
	int status;
	pid_t pid;
	char *string_exe;

	string_exe = get_PATH(argv[0]);
	if (string_exe != NULL)
	{
		argv[0] = string_exe;
	}
	pid = fork();
	if (pid == 0)
	{
		if (execve(argv[0], argv, NULL) == -1)
			perror("Error:");
	}
	else
	{
		wait(&status);
		free(argv);
	}
	return (status);
}
