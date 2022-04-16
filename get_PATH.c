#include "shell.h"
/**
 * main - fork example
 *
 * Return: Always 0.
 */
char *get_PATH(char *comand)
{
	char *string_cat = NULL, **array_path = NULL;
	char *copy = NULL, *token = NULL, *copy2 = NULL, *string = NULL, *slash = "/";
	int position = 0, cont = 0;
	struct stat st;

	char *path = getenv("PATH"); /**Busca una "lista de entorno"**/
	string_cat = _strcat(slash, comand);
	printf("%s\n", string_cat);
	
	copy = strdup(path);
	copy2 = strdup(path);
	token = strtok(copy, ":\n");
	while (token != NULL)
	{
		token = strtok(NULL, ":\n");
		cont++;
	}
	cont = cont + 1;
	array_path = malloc(cont * sizeof(char *));

	token = strtok(copy2, ":\n");
	while (token != NULL)
	{
		array_path[position] = token;
		printf("%s\n", array_path[position]);
		position++;
		token = strtok(NULL, ":\n");
	}
	array_path[position] = NULL;
	printf("%d\n", cont);
	cont = cont - 1;
	while (cont)
	{
		position--;
		string = _strcat(array_path[position], string_cat);
		if (stat(string, &st) == 0)
		{
			free(copy);
			free(copy2);
			free (array_path);
			printf("%s\n", string);
			return (string);
		}
		cont--;
	}
	free(copy);
	free(copy2);
	free (array_path);
	return (NULL);
}