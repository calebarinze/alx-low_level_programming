#include "variadic_functions.h"
#include <stdarg.h>

/**
 *  * sum_them_all - function that returns the sum of all its arguments.
 *   * @n: the number of arguments to be summed.
 *    *
 *     * Return: the computed sum.
 */

int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;

	va_list list;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);

	return (sum);
}
