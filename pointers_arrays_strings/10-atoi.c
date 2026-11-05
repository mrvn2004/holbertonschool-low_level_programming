#include "main.h"
#include <limits.h>

/**
 * _atoi - converts a string to an integer
 * @s: string to convert
 *
 * Return: the converted integer
 */
int _atoi(char *s)
{
	int i;
	int sign;
	int result;
	int digit;
	int limit;
	int multmin;

	i = 0;
	sign = 1;
	result = 0;

	while (s[i] != '\0' && (s[i] < '0' || s[i] > '9'))
	{
		if (s[i] == '-')
			sign = -sign;
		i++;
	}

	limit = (sign == -1) ? INT_MIN : -INT_MAX;
	multmin = limit / 10;

	while (s[i] >= '0' && s[i] <= '9')
	{
		digit = s[i] - '0';

		if (result < multmin)
			return ((sign == -1) ? INT_MIN : INT_MAX);

		result *= 10;

		if (result < limit + digit)
			return ((sign == -1) ? INT_MIN : INT_MAX);

		result -= digit;
		i++;
	}

	if (sign == -1)
		return (result);

	return (-result);
}
