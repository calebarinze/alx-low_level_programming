#include "lists.h"

/**
 *  * print_listint - prints the elements of a linked list.
 *   * @h: pointer to current node (head)
 *    *
 *     * Return: number of nodes in the list.
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
