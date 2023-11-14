#include "shell.h"
/**
  *exiting - exit the shell
  *@argv: arguments
  *Return: nothing
  */
void exiting(char **argv)
{
	if (_strcmp(argv[0], "exit") == 0)
	{
		if (count_args(argv) == 2)
		{
			exit(0);
		}
		else
		{
			exit(_atoi(argv[1]));
		}
	}
}
