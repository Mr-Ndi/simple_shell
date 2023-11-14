/**
  *_strcat - program function
  *@dest: will be holding the first string
  *@src: will be holding the second string
  *Return: will return a pointer to a character of 'dest' string
  */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = src[j];
	return (dest);
}
