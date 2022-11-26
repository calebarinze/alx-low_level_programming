#include "lists.h"

/**
 *  * free_list - frees lists.
 *   * @head: pointer to thing to be freed.
 */

void free_list(list_t *head)
{
	list_t *current, *next;

	current = head;

	while (current != NULL)
	{
		next = current->next;
		free(current->str);
		free(current);
		current = next;
	}
}
