#include "shell.h"
/**
  *path_tok - turn a string in an array of words
  *@str: string argument
  *@n: size of argument
  *@z: the argument to find
  *Return: will return an array of words
  */
char **path_tok(char *str, int n, char *z)
{
	char **s;
	int i = 0, j = 0, k = 0;
	int wlength[1024];
	char *p[1024];

	if (str == NULL || *str == '\0')
		return (NULL);
	while (str[i] != '\0')
	{
		if (str[i] == ':')
			i++;
		else
		{
			p[j] = &str[i];
			wlength[j] = count(&str[i]) + n + 2;
			i += wlength[j] - n - 2;
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
			if (k == (wlength[i] - n - 2))
				s[i][k] = '/';
			else if (k >= wlength[i] - n - 1)
				k += _strlen(_strcpy(&s[i][k], z));
			else
				s[i][k] = p[i][k];
			k++;
		}
		i++;
	}
	s[j] = NULL;
	return (s);
}
