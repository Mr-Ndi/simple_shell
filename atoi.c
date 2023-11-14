#include "shell.h"
/**
 * _atoi - convert string to integer
 * @s: the string
 * Return: integer
 */
int _atoi(char *s)
{
	int sign = 1;
	int i = 0;
	unsigned int r = 0;

	while (!(s[i] <= '9' && s[i] >= '0') && s[i] != '\0')
	{
		if (s[i] == '-')
		sign *= -1;
		i++;
	}
	while (s[i] <= '9' && (s[i] >= '0' && s[i] != '\0'))
	{
		r = (r * 10) + (s[i] - '0');
		i++;
	}
	r *= sign;
	return (r);
}

