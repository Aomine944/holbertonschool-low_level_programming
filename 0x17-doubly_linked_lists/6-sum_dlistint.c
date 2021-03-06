#include "lists.h"
/**
 *sum_dlistint - return the sum of all data
 *@head: list
 *Return: integer
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
