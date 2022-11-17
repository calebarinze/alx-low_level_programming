#include <stdarg.h>
#include <stdio.h>
#include "variadic_functions.h"

/**
 *  * print_numbers - prints integers passed as arguments.
 *   * @n: the number of arguments to be printed.
 *    * @separator: the string to printed between integers.
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;

	va_list digits;

	va_start(digits, n);

	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(digits, int));

		if ((i < (n - 1)) && (separator != NULL))
			printf("%s", separator);
	}

	printf("\n");
}
