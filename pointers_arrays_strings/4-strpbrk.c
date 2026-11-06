#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - searches a string for any byte in another string
 * @s: string to search
 * @accept: string containing accepted bytes
 *
 * Return: pointer to the first matching byte, or NULL
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	i = 0;

	while (s[i] != '\0')
	{
		j = 0;

		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
				return (&s[i]);

			j++;
		}

		i++;
	}

	return (NULL);
}
