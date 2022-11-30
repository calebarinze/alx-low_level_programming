#include "lists.h"

/**
 *  * pop_listint - deletes the node at the head of a list.
 *   * @head: pointer to the first node.
 *    *
 *     * Return: value of data at current node.
 */

int pop_listint(listint_t **head)
{
	int value;
	listint_t *temp;

	if (*head == NULL)
		return (0);

	value = (*head)->n;
	temp = (*head)->next;

	free(*head);
	*head = temp;

	return (value);
}
