#include <stdio.h>
#include "variadic_functions.h"

/**
 * print_numbers - Prints a list of numbers
 * @separator: String to print between numbers
 * @n: Number of arguments
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		if (i > 0 && separator != NULL)
			printf("%s", separator);

		printf("%d", va_arg(args, int));
	}

	va_end(args);
	printf("\n");
}
