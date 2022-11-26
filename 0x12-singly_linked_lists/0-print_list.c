#include "lists.h"

/**
 *  * print_list - prints the elements of each node in a linked list.
 *   * @h: pointer to the current node.
 *    *
 *     * Return: number of nodes printed.
 */

size_t print_list(const list_t *h)
{
	const list_t *ptr = h;
	size_t ncount = 0;

	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%u] %s\n", ptr->len, ptr->str);
		ptr = ptr->next;
		ncount++;
	}
		return (ncount);
}
