#ifndef SHELL_H
#define SHELL_H
/*
* File: main.h
* Auth: Andres Ocaña - Jhojan Perlaza
* Desc: Header file containing declarations for all functions
* used in the _printf.
*/
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <stdbool.h>
#include <string.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <errno.h>
#include<stdbool.h>

extern char **environ;

/**
 * struct get - helps to match the parameters
 *
 * @type: type of fuction 
 * @f: The function associated
 */
typedef struct get
{
	char *shape;
	int (*f)(char **comand, char *copy, char *buffer);
} get_fun;

char *_strcat(char *dest, char *src);
char **get_arguments(char *buffer, int cont);
int execute(char **arguments, char *copy, char *buffer, char **name_file, int cont);
char *get_PATH(char *argv);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);
char *_strdup(char *str);
int fun_exit(char **comand, char *copy, char *buffer);
int (*match_fun(char *comands))(char **comand,char *copy, char *buffer );
int fun_env(char **arguments, char *copy, char *buffer);
void print_error(char **name_file, char *copy, int cont);
#endif
