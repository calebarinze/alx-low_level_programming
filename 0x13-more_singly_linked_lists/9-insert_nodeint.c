#include "lists.h"

listint_t *node_spawner(int n);
/**
 *  * insert_nodeint_at_index - inserts a new node at given index.
 *   * @head: pointer to the beginning of the list.
 *    * @idx: index at which to insert new node.
 *     * @n: value to be assigned to new node.
 *      *
 *       * Return: pointer to new node.
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr, *new;
	unsigned int i;

	new = node_spawner(n);
	if (new == NULL)
		return (NULL);

	if (head == NULL)
		return (NULL);

	ptr = *head;
	if (idx > 0)
	{
		for (i = 0; i < idx - 1; i++)
		{
			if (ptr == NULL)
				return (NULL);
			ptr = ptr->next;
		}
	}

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	new->next = ptr->next;
	ptr->next = new;
	return (new);

}

/**
 *  * node_spawner - creates a new node.
 *   * @n: data of new node.
 *    * Return: pointer to new node.
 */

listint_t *node_spawner(int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;

	return (new);
}
