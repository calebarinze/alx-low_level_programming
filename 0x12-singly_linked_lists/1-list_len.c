#include "lists.h"

/**
 *  * list_len - obtains the number of elements in a linked list.
 *   * @h: pointer to nodes in the list.
 *    *
 *     * Return: number of elements.
 */

size_t list_len(const list_t *h)
{
	const list_t *ptr = h;
	size_t ncount = 0;

	while (ptr != NULL)
	{
		ncount++;
		ptr = ptr->next;
	}
	return (ncount);
}
