#include "main.h"
#include <stdlib.h>

/**
 *  * array_range - creates an array of integers.
 *   * @min: lowest integer.
 *    * @max: highest integer.
 *     * Return: address to location of created array.
 */

int *array_range(int min, int max)
{
	int *range, i, ts;

	if (min > max)
		return (0);

	ts = (max - min + 1);

	range = malloc(sizeof(int) * ts);

	if (range == 0)
		return (0);

	for (i = 0; i < ts; i++)
	{
		range[i] = min;
		min++;
	}
	return (range);
}
