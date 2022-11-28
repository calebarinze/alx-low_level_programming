#include "lists.h"

/**
 *  * delete_nodeint_at_index - deletes a node at given index.
 *   * @head: pointer to the beginning of the list.
 *    * @index: the given index.
 *     *
 *      * Return: 1 for success, -1 for failure.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *ptr, *node;

	ptr = *head;
	if (*head == NULL || head == NULL)
		return (-1);

	if (index == 0)
	{
		node = ptr->next;
		free(ptr);
		*head = node;
		return (1);
	}

	for (i = 0; i < index - 1; i++)
	{
		if (ptr->next == NULL)
			return (-1);
		ptr = ptr->next;
	}

	node = ptr->next;
	ptr->next = node->next;
	free(node);
	return (1);
}
