#include "holberton.h"

/**
 * _atoi - convert string to integer
 * @s: string to be converted
 * Return: integer
 */
int _atoi(char *s)
{
        int i = 0;
	int j = -1;
	int number = 0;
	int isnum = 0;

	while (s[i] != '\0')
	{
		if (s[i] == '-')
			j = j * -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			number = (number * 10) - (s[i] - '0');
			isnum = 1;
		}
		else if (isnum == 1)
			break;
		i++;
	}
	return (number * j);
}
