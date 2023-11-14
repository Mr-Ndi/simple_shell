#ifndef SHELL_H
#define SHELL_H
#include <stdio.h>
#include <sys/types.h>
#include <string.h>
#include <sys/wait.h>
#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
extern char **environ;
char **tokenize(char *line);
void ex(char **argv);
void forking(char **argv);
char **strtow(char *str);
char **path_tok(char *str, int n, char *z);
void free_args(char **args, int rows);
int count_args(char **args);
char *_strcat(char *dest, char *src);
int _strncmp(char *s1, char *s2, int n);
int _strlen(char *s);
char *get_path(char *name);
char *stat_arg(char **arg);
char *reallocate_arg(char *arg1, char *arg2);
char *_strcpy(char *dest, char *src);
int count(char *p);
char **alloc(int j, int wlength[]);
void prompt(void);
void exiting(char **);
int _atoi(char *s);
int _strcmp(char *s1, char *s2);
#endif
