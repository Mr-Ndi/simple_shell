#include "shell.h"
/**
  *strtow - turn a string in an array of words
  *@str: string argument
  *Return: will return an array of words
  */
char **strtow(char *str)
{
	char **s;
	int i = 0, j = 0, k = 0;
	int wlength[1024];
	char *p[1024];

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}
	while (str[i] != '\0')
	{
		if (str[i] == '\t' || str[i] == ' ' || str[i] == '\n')
		{
			i++;
		}
		else
		{
			p[j] = &str[i];
			wlength[j] = count(&str[i]) + 1;
			i += wlength[j] - 1;
			j++;
		}
	}
	i = 0;
	s = alloc(j + 1, wlength);
	while (i < j)
	{
		k = 0;
		while (k < wlength[i] - 1)
		{
			s[i][k] = p[i][k];
			k++;
		}
		s[i][k] = '\0';
		i++;
	}
	s[j] = NULL;
	return (s);
}
