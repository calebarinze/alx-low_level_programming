#include "main.h"

/**
 *  * print_binary - smashes n into binary form
 *   * @n: number to smashed into binary.
 */

void print_binary(unsigned long int n)
{
	if (n == 0)
		_putchar('0');
	else
		binarator(n);
}

/**
 *  * binarator - helper code to extract binary
 *   * @n: number to be smashed into binary.
 */

void binarator(unsigned long int n)
{
	if (!n)
		return;

	binarator(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
