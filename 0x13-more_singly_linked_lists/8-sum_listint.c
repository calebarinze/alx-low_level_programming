#include "lists.h"

/**
 *  * sum_listint - sums the data of all elements in a list.i
 *   * @head: pointer to thr first node in the list.
 *    *
 *     * Return: sum of data values.
 */

int sum_listint(listint_t *head)
{
	listint_t *current;
	int sum = 0;

	if (head == NULL)
		return (0);

	current = head;
	while (current != NULL)
	{
		sum += current->n;
		current = current->next;
	}

	return (sum);
}
