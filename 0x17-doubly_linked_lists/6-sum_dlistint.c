#include "lists.h"
/**
  * sum_dlistint - returns the sum of all data n, of dlistint
  * @head: head of linked list
  * Return: sum of all data n, in linked list, 0 if empty
  */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
