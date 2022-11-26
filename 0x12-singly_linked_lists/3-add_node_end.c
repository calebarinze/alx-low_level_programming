#include "lists.h"

/**
 *  * add_node_end - adds a new node at the last
 *   * @head: pointer to new node.
 *    * @str: string to be duplicated into new node.
 *     *
 *      * Return: pointer to new node.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	size_t slen = 0;
	list_t *last = malloc(sizeof(list_t));
	list_t *temp = malloc(sizeof(list_t));

	if (last == NULL)
		return (NULL);

	last->str = strdup(str);

	while (str[slen])
		slen++;

	last->len = slen;
	last->next = NULL;
	temp = *head;

	if (*head == NULL)
	{
		*head = last;
	}
	else
	{
		while (temp->next)
			temp = temp->next;
		temp->next = last;
	}
	return (*head);
}
