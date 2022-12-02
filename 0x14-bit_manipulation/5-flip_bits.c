#include "main.h"

/**
 *  * flip_bits - counts the number of flipped bits required to change a number.
 *   * @n: the first number.
 *    * @m: the second number.
 *     * Return: the number of flipped bits.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int x = 0, count = 0;

	x = m ^ n;

	while (x)
	{
		if (x & 1)
			count++;
		x >>= 1;
	}
	return (count);
}
