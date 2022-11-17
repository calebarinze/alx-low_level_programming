#include <stddef.h>
#include "function_pointers.h"

/**
 *  * int_index - searches an array for an integer.
 *   * @array: the array to be evaluated.
 *    * @size: size of the array.
 *     * @cmp: pointer to the function that does the actual searching.
 *      *
 *       * Return: index at which an integer is found or -1 for failure.
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		if (size <= 0)
			return (-1);

		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]))
				return (i);
		}
	}
	return (-1);
}
