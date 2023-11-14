/**
  *_strlen - program function
  *@s: will be holding a pointer to a string
  *Return: will return nothing
  */
int _strlen(char *s)
{
	int i = 0;
	int j = 0;

	if (!s)
		return (0);

	while (s[i] != '\0')
	{
		j++;
		i++;
	}
	return (j);
}
