#include <stdio.h>

/**
 * main - Prints hexadecimal numbers in lowercase
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int number;

	number = 0;
	while (number < 10)
	{
		putchar(number + '0');
		number++;
	}

	number = 0;
	while (number < 6)
	{
		putchar(number + 'a');
		number++;
	}

	putchar('\n');

	return (0);
}
