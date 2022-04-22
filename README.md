# README - SIMPLE SHELL

[![Whats-App-Image-2022-04-21-at-5-24-21-PM.jpg](https://i.postimg.cc/L6cP6H47/Whats-App-Image-2022-04-21-at-5-24-21-PM.jpg)](https://postimg.cc/dL935cym)

## NAME
_shell - command interpreter (shell)_

## SYNOPSIS
_shell [get_arguments] [get_PATH] [execute]_

## DESCRIPTION
_shell is a command interpreter which mimics the system .B shell.This is the first version developed by HolbertonSchool first term students. This version has features like interactive mode and non-interactive mode. This manual page is not intended to be a tutorial or a complete selection._

### Overview
_The shell is a command that reads lines from a file or from the terminal. It interprets them and generally ex‐ ecutes other commands. To run the program we use the .B ./shell command and to exit it we can use the .B exit command._

### Invocation
_If  there are no arguments present to execute, it will output the file not executed option and if the input is a command it will perform the command. Shell can handle the following command  errors  (as  described  below). prints  error  when there are problems in the executable. When starting for the first time, the shell inspects argument 0, and if it starts with a hyphen '-', the shell is it is also considered  a  login  shell.  A  login shell first reads the commands of the files and if they exist it executes them._
### Argument List Processing
_The  incoming argument can be specified a hyphen "-" and activate the traibuto of that option..br_ 

* ls Print the files
* ls -l Print the files with all the characteristics of the files
* ls -l *.c Print the files with all the characteristics of the files with extension .c
* exit Exit the program
* env Prints the current environment

### EXAMPLE
```
~/simple_shell$ gcc -g -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh
~/simple_shell$ ./hsh
simple_shell-> 

simple_shell-> ls

README.md   execute.c  'get_PATH copy'    get_arguments.c    
shell  _strcat.c    generate_authors.sh   get_PATH.c       
main.c            shell.h
        
simple_shell-> ls -l

-rw-r--r--  1  AFOP     61 Apr 12 22:02  README.md -rw-r--r-- 1 AFOP   733 Apr 15 11:32  _strcat.c -rw-
r--r-- 1 AFOP   456 Apr 14 18:36  execute.c -rwxr-xr-x 1 AFOP   407 Apr 13 23:55  generate_authors.sh
        
simple_shell-> /bin/ls

README.md   execute.c            'get_PATH copy'   get_arguments.c   shell
_strcat.c   generate_authors.sh   get_PATH.c       main.c            shell.h

simple_shell-> env
USER=julien  LANGUAGE=en_US  SESSION=ubuntu  COMPIZ_CONFIG_PROFILE=ubuntu   SHLVL=1   HOME=/home/julien
C_IS=Fun_:)             DESKTOP_SESSION=ubuntu            LOGNAME=julien            TERM=xterm-256color
PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/lo‐
cal/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin DISPLAY=:0
```

## MAP MIND

![mapa mental](https://media-exp1.licdn.com/dms/image/C4E12AQFjzFdl-LDhyQ/article-inline_image-shrink_1500_2232/0/1650431719995?e=2147483647&v=beta&t=YxpTNF4xLQo4jl7hnaLTF8a0tvHrugB_rHnRhMLp_9c)

## AUTHORS
* **Jhojan David Perlaza** - *Trabajo Inicial* - [jhojanperlaza](https://github.com/jhojanperlaza)
* **Andrés Ocaña** - *Documentación* - [AFOP](https://github.com/afop)

* Comentanos sobre que te parecio el proyecto 📢
* Gracias a todas las personas que hicieron posible el desarrollo del proyecto 🤓.
* Finalización: 21/04/2022  