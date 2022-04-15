#include "shell.h"
/**
 * _strcat - concatenates two strings.
 * @src: pointer of the string one
 * @dest: pointer of the string two
 * Return: a pointer with the resulting of the string
 */
char *_strcat(char *dest, char *src)
{
	long unsigned int i = 0, j = 0, len = 0;
    char *content = NULL, *con = NULL;
    
    free (content);    
    len = strlen(dest) + strlen(src) + 1;
    content = malloc((len) * sizeof(char));
    if (content == NULL)
        return (NULL);
    for (i = 0; i < len; i++)
    {
        if (i < strlen(dest))
          content[i] = dest[i];
        if (i >= strlen(dest))
        {
          content[i] = src[j];
          j++;
        }
    } 
    con = content;
    free(content);
    return (con);
}