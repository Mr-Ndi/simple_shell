#include "shell.h"
/**
  *alloc - allocate memory dynamically
  *@j: number of words
  *@wlength: number of characters in a word
  *Return: return a pointer to a pointer to a char
  */
char **alloc(int j, int wlength[])
{
	char **s;
	int i = 0, k = 0;

	if (j == 0)
	{
		return (NULL);
	}

	s = (char **) malloc(j * sizeof(char *));
	if (s == NULL)
	{
		return (NULL);
	}
	while (i < j - 1)
	{
		s[i] = (char *) malloc(sizeof(char) * wlength[i]);
		if (s[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(s[k]);
			}
			free(s);
			return (NULL);
		}
		i++;
	}
	return (s);
}
