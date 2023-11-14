#include "shell.h"
/**
  *count_args - argument counter
  *@args: array of (string) arguments
  *Return: count of arguments
  */

int count_args(char **args)
{
	int i = 0;

	if (!args)
		return (0);

	while (args[i])
	{
		i++;
	}
	i++;
	return (i);
}
