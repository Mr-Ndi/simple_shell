#include "shell.h"
/**
  *forking - this function forks the running program
  *@argv: arguments for the execve function
  *Return: nothing
  */
void forking(char **argv)
{
	pid_t child_process;
	int status;

	child_process = fork();

	if (child_process == -1)
	{
		perror("forking");
		exit(1);
	}
	else if (child_process == 0)
	{
		ex(argv);
	}
	else
	{
		waitpid(child_process, &status, 0);
	}
}
