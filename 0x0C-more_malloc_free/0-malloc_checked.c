#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *  * malloc_checked - supposed to allocate memory using malloc
 *   * @b: the size of memory to be allocated (sizeof(type) * amount)
 *    *
 *     * Return: pointer to allocated memory.
 *      */

void *malloc_checked(unsigned int b)
{
	int *ptr;
	
	ptr = malloc(b);
	
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
