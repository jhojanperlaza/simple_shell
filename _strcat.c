#include "shell.h"
/**
 * _strcat - concatenates two strings.
 * @src: pointer of the string one
 * @dest: pointer of the string two
 * Return: a pointer with the resulting of the string
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	if (!dest || !src)
		return(NULL);
	while (dest[j] != '\0')
	{
		j++;
	}
	while (i < j && src[i] != '\0')
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';

	return (dest);
}
