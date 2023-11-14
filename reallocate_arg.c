#include "shell.h"
/**
  *reallocate_arg - reallocate argv[0]
  *@arg1: old argument
  *@arg2: new argument
  *Return: char *
  */

char *reallocate_arg(char *arg1, char *arg2)
{
	char *p;

	free(arg1);
	p = (char *)malloc(sizeof(char) * _strlen(arg2) + 1);
	_strcpy(p, arg2);
	return (p);
}
