#include "shell.h"
/**
  *main - program entry point
  *Return: always 0
  */
int main(void)
{
	int truth = 0;
	size_t len;
	struct stat cmd;
	char **arg = NULL, **argv = NULL;
	char *path = NULL, *str = get_path("PATH"), *line = NULL;

	prompt();
	while (getline(&line, &len, stdin) != -1)
	{
		truth = 0;
		path = NULL;
		argv = arg = NULL;
		if (*line != '\n')
		{
			argv = strtow(line);
			exiting(argv, line);
			if (argv[0][0] != '/')
				arg = path_tok(str, _strlen(argv[0]), argv[0]);
			path = stat_arg(arg);
			if (path)
				truth = 1;
			if (stat(argv[0], &cmd) == 0 || truth)
			{
				if (truth)
					argv[0] = reallocate_arg(argv[0], path);
				forking(argv);
			}
			else
				perror(argv[0]);
			if (argv)
				free_args(argv, count_args(argv));
			if (arg)
				free_args(arg, count_args(arg));
		}
		prompt();
	}
	/*if (isatty(STDIN_FILENO))
		write(1, "\n", 1);*/
	free(line);
	return (0);
}
