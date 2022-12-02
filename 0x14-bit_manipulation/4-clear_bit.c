#include "main.h"

/**
 *  * clear_bit - clears a bit at given index.
 *   * @n: decimal number to be evaluated.
 *    * @index: postiion of bit to be cleared.
 *     *
 *      * Return: -1 for failure, 1 for success.
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m = 1, i;

	if (index > 32 || !n)
		return (-1);

	for (i = 0; i < index; i++)
		m <<= 1;

	if (*n & m)
		*n ^= m;
	return (1);
}
