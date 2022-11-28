#include "lists.h"

listint_t *node_spawn(const int n);

/**
 *  * add_nodeint_end - adds a node to the end of the list.
 *   * @n: value stored in new node.
 *    * @head: pointer to current node.
 *     * Return: pointer to the new node.
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *temp;

	temp = *head;
	if (head == NULL)
		return (NULL);

	new = node_spawn(n);
	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}
	while (temp->next)
		temp = temp->next;
	temp->next = new;

	return (*head);
}

/**
 *  * node_spawn - creates a new node.
 *   * @n: data stored in new node.
 *    *
 *     * Return: pointer to new node.
 */

listint_t *node_spawn(const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	return (new);
}
