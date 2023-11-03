# include <stdio.h>
# include <stdlib.h>
# include <string.h>
int main(void)
{
	char wish[15], *argv[15];
	char *part;
	size_t length, i = 0;


	while(1)
	{
		printf("This is fun! $ ");
		if(fgets(wish, sizeof(wish), stdin) == NULL)
		{
			exit(0);
		}
	}
	length = strlen(wish);

	if (length > 0 && wish[length - 1] == '\n')
	{
		wish[length - 1] = '\0';
	}

	part = strtok(wish, " \t\n");
	
	while(part)
	{
		argv[i] = part;
		i++;
		part = strtok(NULL, "\t\n");
	}
	return(0);
}
