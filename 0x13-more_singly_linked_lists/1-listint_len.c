#include "lists.h"

/**
 *  * listint_len - prints the number of elements in a LL.
 *   * @h: pointer to the current node.
 *    *
 *     * Return: number of elements in the list.
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		count++;
		h = h->next;
	}
	return (count);
}
