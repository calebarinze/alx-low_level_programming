#include "main.h"

/**
 *  * get_bit - returns the bit at given index
 *   * @n: the number to evaluated.
 *    * @index: the position of the required bit.
 *     *
 *      * Return: obtained bit or -1 for error.
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int i;

	if (index > 64)
		return (-1);
	/* error message means the length of the binary would exceed 32 bit size*/
	for (i = 0; i < index; i++)
	{
		n >>= 1;
	}
	return (n & 1);
}
