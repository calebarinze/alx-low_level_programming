#include "main.h"
#include <stdlib.h>

/**
 *  * _calloc - allocates memory and initialises with 0.
 *   * @nmemb: number of elements in memory.
 *    * @size: size of individual elements.
 *     *
 *      * Return: pointer to location of allocated memory block.
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *dest;

	unsigned int lms, bytes, i, space;

	lms = nmemb, bytes = size;

	if (lms == 0 || bytes == 0)
		return (0);

	dest = malloc(lms * bytes);

	if (dest == 0)
		return (0);

	space = lms * bytes;

	for (i = 0; i < space; i++)
		dest[i] = 0;

	return (dest);
}
