#include <stdlib.h>
#include "dog.h"

/**
 *  * free_dog - frees all memory allocated to dog_t objects
 *   * @d: the dog to be set free.
 */

void free_dog(dog_t *d)
{
	if (d == 0)
		return;
	free((*d).name);
	free((*d).owner);
	free(d);
}
