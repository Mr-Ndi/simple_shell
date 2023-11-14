/**
  *_strcmp - program function
  *@s1: will be holding the buffer to hold the first string
  *@s2: will be holding the second string
  *Return: will return an integer
  */
int _strcmp(char *s1, char *s2)
{
	int j = 0;
	int diff = 0;

	while (diff == 0 && (s1[j] != '\0' && s2[j] != '\0'))
	{
		diff = s1[j] - s2[j];
		j++;
	}
	return (diff);
}
