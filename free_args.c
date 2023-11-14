#include "shell.h"
/**
  *free_args - free argument vector
  *@args: arguments
  *@rows: number of rows
  *Return: will return nothing
  */
void free_args(char **args, int rows)
{
	int i = 0;

	if (rows == 0)
	{
		return;
	}
	else
	{
		while (i < rows)
		{
			free(args[i]);
			i++;
		}
		free(args);
	}
}
