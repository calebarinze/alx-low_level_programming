#include "lists.h"

/**
 *  * free_listint - frees nodes in the list
 *   * @head: pointer to the first element in the list.
 */

void free_listint(listint_t *head)
{
	listint_t *p, *next;

	p = head;
	while (p != NULL)
	{
		next = p->next;
		free(p);
		p = next;
	}
}
