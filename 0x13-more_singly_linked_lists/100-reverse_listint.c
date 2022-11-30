#include "lists.h"

/**
 *  * reverse_listint - reverses a linked list.
 *   * @head: pointer to the beginning of the list.
 *    *
 *     * Return: head.
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *current, *prev;

	if (!head || !(*head))
		return (NULL);

	if (!(*head)->next)
		return (*head);

	current = *head;
	prev = NULL;

	while (*head)
	{
		current = *head;
		*head = (*head)->next;
		current->next = prev;
		prev = current;
	}
	*head = current;
	return (*head);
}
