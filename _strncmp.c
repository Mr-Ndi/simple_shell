/**
  *_strncmp - program function
  *@s1: will be holding the buffer to hold the first string
  *@s2: will be holding the second string
  *@n: number of characters to compare
  *Return: will return an integer
  */
int _strncmp(char *s1, char *s2, int n)
{
	int j = 0;
	int diff = 0;

	while (diff == 0 && (s1[j] != '\0' && s2[j] != '\0') && j < n)
	{
		diff = s1[j] - s2[j];
		j++;
	}
	return (diff);
}
