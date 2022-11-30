#include "lists.h"

/**
 *  * get_nodeint_at_index - accesses a list node at the given index.
 *   * @head: pointer to the beginning of the list.
 *    * @index: the list index to be printed.
 *     *
 *      * Return: node at location.
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr;
	unsigned int i;

	ptr = head;
	for (i = 0; i < index; i++)
	{
		ptr = ptr->next;
		if (ptr == NULL)
			return (NULL);
	}

	return (ptr);
}
