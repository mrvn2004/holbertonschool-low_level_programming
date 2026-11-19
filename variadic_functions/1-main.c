#include <stdio.h>
#include "variadic_functions.h"

/**
 * main - Tests print_numbers
 *
 * Return: Always 0
 */
int main(void)
{
	print_numbers(", ", 4, 0, 98, -1024, 402);
	print_numbers("; ", 3, 10, 20, 30);
	print_numbers(NULL, 2, 100, 200);
	print_numbers(", ", 0);

	return (0);
}
