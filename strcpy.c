/**
  *_strcpy - program function
  *@dest: will be holding an array
  *@src: will be holding the number of elements in the array
  *Return: will return a pointer to a character
  */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = src[i];
	return (dest);
}
