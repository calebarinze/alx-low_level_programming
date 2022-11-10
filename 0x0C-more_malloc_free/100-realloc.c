#include "main.h"
#include <stdlib.h>

/**
 *  * _realloc - reallocates the contents of ptr to new block with new size.
 *   * @ptr: pointer to address of first memory block.
 *    * @old_size: size of ptr array.
 *     * @new_size: size of new memory location.
 *      *
 *       * Return: address to new memory location.
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *dest;

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0 && ptr != 0)
	{
		free(ptr);
		return (0);
	}
	if (ptr == 0)
	{
		dest = malloc(new_size);
		free(ptr);
		return (dest);
	}

	dest = malloc(new_size);

	if (dest == 0)
		return (0);

	free(ptr);

	return (dest);
}
