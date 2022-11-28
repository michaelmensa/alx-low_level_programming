#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
  * print_listint - function that prints all the elements of a listint_t list
  * @h: header pointer
  * Return: number of nodes
  */

size_t print_listint(const listint *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%i\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
