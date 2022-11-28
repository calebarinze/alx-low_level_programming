#include "lists.h"

/**
 *  * add_nodeint - adds a node at the beginning of a list.
 *   * @n: value to be assigned to new node.
 *    * @head: pointer to the beginning of the list.
 *     * Return: head.
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;
	*head = new;

	return (*head);
}
