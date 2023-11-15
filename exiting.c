#include "shell.h"
/**
  *exiting - exit the shell
  *@argv: arguments
  *@line: string containing arguments
  *Return: nothing
  */
void exiting(char **argv, char *line)
{
	if (_strcmp(argv[0], "exit") == 0)
	{
		if (count_args(argv) == 2)
		{
			free(line);
			free_args(argv, count_args(argv));
			exit(0);
		}
		else
		{
			free(line);
			free_args(argv, count_args(argv));
			exit(_atoi(argv[1]));
		}
	}
}
