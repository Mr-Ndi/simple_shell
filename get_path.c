#include "shell.h"
/**
  *get_path - get the value of and environment variable
  *@name: name of the environment variable
  *Return: string value of the variable
  */
char *get_path(char *name)
{
	char **env;
	char *entry;
	char *var;

	if (name == NULL || environ == NULL)
		return (NULL);

	env = environ;
	var = NULL;

	while (*env != NULL)
	{
		entry = *env;
		if (_strncmp(entry, name, _strlen(name)) == 0 && entry[_strlen(name)] == '=')
		{
			var = entry + _strlen(name) + 1;
			break;
		}
		env++;
	}
	return (var);
}
