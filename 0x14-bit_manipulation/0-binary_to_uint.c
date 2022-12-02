#include "main.h"

/**
 *  * binary_to_uint - converts a binary number to an unsigned integer.
 *   * @b: pointer to the intended string.
 *    *
 *     * Return: result of conversion.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int l, i = 0, sum = 0;

	if (b)
	{
		for (l = 0; b[l] != '\0'; l++)
			;

		while (l--)
		{
			if (b[l] != '0' && b[l] != '1')
				return (0);
			if (b[l] == 49)
				sum += 1 << i;
			i++;
		}

		return (sum);
	}
	else
		return (0);
}
