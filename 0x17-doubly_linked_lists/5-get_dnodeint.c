#include "lists.h"
/**
  * get_dnodeint_at_index - returns the nth node of dlistint_t list
  * @head: input header pointer
  * @index: node index starting from 0
  * Return: NULL if node does not exist
  */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *node;
	unsigned int cont = 0;

	node = head;
	while (node != NULL && cont <= index)
	{
		if (cont == index)
			return (node);
		node = node->next;
		cont++;
	}
	return (NULL);
}
