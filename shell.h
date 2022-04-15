#ifndef SHELL_H
#define SHELL_H

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

char *_strcat(char *dest, char *src);
char **get_arguments(char *buffer, int cont);
int execute(char **argv);
char *get_PATH(char *argv);
void free_array(char **array, int n);
#endif
