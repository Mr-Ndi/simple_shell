#include "shell.h"
/**
  *stat_arg - search for a file
  *@v: value of environment variable
  *Return: nothing
  */
char *stat_arg(char **v)
{
	char **var = v;
	struct stat file;

	if (!var)
		return (NULL);

	while (*var)
	{
		if (stat(*var, &file) == 0)
		{
			return (*var);
		}
		var++;
	}
	return (NULL);
}
