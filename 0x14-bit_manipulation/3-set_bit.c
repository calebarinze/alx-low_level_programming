#include "main.h"

/**
 *  * set_bit - changes the value of a bit at given index.
 *   * @n: decimal number to be evaluated.
 *    * @index: position of required bit.
 *     *
 *      * Return: 1 for success, -1 otherwise.
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int i, m = 1;

	if (index > 32)
		return (-1);

	for (i = 0; i < index; i++)
		m <<= 1;

	*n = (*n | m);

	return (1);
}
