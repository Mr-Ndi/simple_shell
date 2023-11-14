#include "shell.h"
/**
  *ex - function to run a execute a new program
  *@argv: arguments for executiion
  *Return: nothing
  */
void ex(char **argv)
{
	execve(argv[0], argv, environ);

	perror(argv[0]);
	exit(0);
}
