#include "lists.h"
/**
  * free_dlistint - frees dlistint_t
  * @head: input head pointer
  * Return: nothing
  */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	while (head != NULL)
	{
		tmp = head;
		head = head->next;
		free(tmp);
	}
}
