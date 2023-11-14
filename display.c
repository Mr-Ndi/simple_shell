#include "shell.h"
/**
  *prompt - display the prompt in interactive mode
  *Return: nothing
  */

void prompt(void)
{
	if (isatty(STDIN_FILENO))
	{
		if (write(1, "$ ", 2) == -1)
		{
			perror("./shell");
			exit(0);
		}
	}
}

