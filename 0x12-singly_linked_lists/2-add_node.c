#include "lists.h"

/**
 *  * add_node - creates a new node in a linked list
 *   * @head: pointer to the first element of the list (new).
 *    * @str: string to be duplicated into new element.
 *     *
 *      * Return: pointer to newly created node at head.
 */

list_t *add_node(list_t **head, const char *str)
{
	const char *lit = str;
	size_t n = 0;

	list_t *new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	while (str[n])
		n++;

	new->str = strdup(lit);
	new->len = n;
	new->next = *head;
	*head = new;

	return (*head);
}
