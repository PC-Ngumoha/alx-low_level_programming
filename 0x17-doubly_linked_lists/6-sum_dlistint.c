#include "lists.h"

/**
 * sum_dlistint - returns the sum of the data in a D.L.L
 * @head: pointer to the head node
 *
 * Return: sum (If it has data) or 0 (no data)
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
