#include "shell.h"
/**
 * main - fork example
 *
 * Return: Always 0.
 */
char *get_PATH(char *comand)
{
	char slash[1024] = "/", *string_cat, **array_path = NULL;
	char *copy, *token, *copy2, *string;
	int position = 0, cont = 0;
	struct stat st;

	char *path = getenv("PATH"); /**Busca una "lista de entorno"**/
	string_cat = strcat(slash, comand);

	copy = strdup(path);
	copy2 = strdup(path);
	token = strtok(copy, ":\n");
	while (token != NULL)
	{
		token = strtok(NULL, ":\n");
		cont++;
	}
	printf("%i\n", cont);
	array_path = malloc(cont + 1 * sizeof(char *));

	token = strtok(copy2, ":\n");
	while (token != NULL)
	{
		array_path[position] = token;
		printf("%s\n", array_path[position]);
		position++;
		token = strtok(NULL, ":\n");
	}
	array_path[position] = NULL;

	while (cont)
	{
		position--;
		string = strcat(array_path[position], string_cat);
		if (stat(string, &st) == 0)
		{
			free(copy);
			free(copy2);
			return (string);
		}
		cont--;
	}
	free(copy);
	free(copy2);
	free (array_path);
	return (NULL);
}