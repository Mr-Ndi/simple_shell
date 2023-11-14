#include "shell.h"
/**
  *count - count the number of characters
  *@p: pointer to a character
  *Return: integer
  */
int count(char *p)
{
	int i = 0;

	while (p[i] != '\t' && p[i] != ' ' && p[i] != '\0'
			&& p[i] != '\n' && p[i] != ':')
	{
		i++;
	}
	return (i);
}

