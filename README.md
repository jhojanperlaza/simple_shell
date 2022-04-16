#README - SIMPLE SHELL
Authors: Jhojan Perlaza and Andres Ocaña
SHELL(1)(20 April 2022)                                                                       SHELL(1)(20 April 2022)

NAME
       shell - command interpreter (shell)

SYNOPSIS
       shell [get_arguments] [get_PATH] [execute]

DESCRIPTION
       shell is a command interpreter which mimics the system .B shell.This is the first version developed by Holber‐
       tonSchool first term students. This version has features like interactive mode and non-interactive mode.  This
       manual page is not intended to be a tutorial or a complete selection.

Overview
       The shell is a command that reads lines from a file or from the terminal. It interprets them and generally ex‐
       ecutes other commands. To run the program we use the .B ./shell command and to exit it we can use the .B  exit
       command.

Invocation
       If  there are no arguments present to execute, it will output the file not executed option and if the input is
       a command it will perform the command. Shell can handle the following command  errors  (as  described  below).
       prints  error  when there are problems in the executable. When starting for the first time, the shell inspects
       argument 0, and if it starts with a hyphen '-', the shell is it is also considered  a  login  shell.  A  login
       shell first reads the commands of the files and if they exist it executes them.
Argument List Processing
       The  incoming argument can be specified a hyphen "-" and activate the traibuto of that option..br ls Print the
       files
       ls -l Print the files with all the characteristics of the files
       ls -l *.c Print the files with all the characteristics of the files with extension .c
       exit Exit the program
       env Prints the current environment

       EXAMPLE
              ~/simple_shell$ ls

              README.md   execute.c            'get_PATH copy'    get_arguments.c    shell  _strcat.c    generate_au‐
              thors.sh   get_PATH.c       main.c            shell.h
              ~/simple_shell$ ls -l

              -rw-r--r--  1  AFOP     61 Apr 12 22:02  README.md -rw-r--r-- 1 AFOP   733 Apr 15 11:32  _strcat.c -rw-
              r--r-- 1 AFOP   456 Apr 14 18:36  execute.c -rwxr-xr-x 1 AFOP   407 Apr 13 23:55  generate_authors.sh
              ~/simple_shell$ /bin/ls

              README.md   execute.c            'get_PATH copy'   get_arguments.c   shell
               _strcat.c   generate_authors.sh   get_PATH.c       main.c            shell.h

              ~/simple_shell$ env
              USER=julien  LANGUAGE=en_US  SESSION=ubuntu  COMPIZ_CONFIG_PROFILE=ubuntu   SHLVL=1   HOME=/home/julien
              C_IS=Fun_:)             DESKTOP_SESSION=ubuntu            LOGNAME=julien            TERM=xterm-256color
              PATH=/home/julien/bin:/home/julien/.local/bin:/usr/local/sbin:/usr/lo‐
              cal/bin:/usr/sbin:/usr/bin:/sbin:/bin:/usr/games:/usr/local/games:/snap/bin DISPLAY=:0

AUTHORS
       JHOJAN DAVID PERLAZA and ANDRES FELIPE OCAÑA

man page of simple_shell                                 1.0                                  SHELL(1)(20 April 2022)