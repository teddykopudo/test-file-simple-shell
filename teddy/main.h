#ifndef _MAIN_H
#define _MAIN_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/wait.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>
#include <sys/stat.h>
#include <limits.h>

#define BUFSIZE 1024
#define TOK_BUFSIZE 128
#define TOK_DELIM " \t\r\n\a"

#define clear() printf("\033[H]\033[J")

#define MAX_COMMAND 1000
#define MAXLIST 100

void init_tashell()
int input(char* str)
void dirprint()
void execargs(char** parsed)
void execargspiped(char** parsed, char** parsedpipe) 
void help()
int cmdhandle(char** parsed)
int parsepipe(char* str, char** strpiped)
void parsespace(char* str, char** parsed)
int processstring(char* str, char** parsed, char** parsedpipe)

#endif
