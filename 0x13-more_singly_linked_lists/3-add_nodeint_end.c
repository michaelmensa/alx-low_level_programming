#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
  * add_nodeint_end - function that adds a new node at the end of a listint_t
  * list.
  * @head: input header pointer
  * @n: input data int
  * Return: tha address of the new element, or NULL if it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *newnode;
	listint_t *temp;	/* temporary node pointer */

	newnode = malloc(sizeof(listint_t));
	if (newnode == NULL)
		return (NULL);
	newnode->n = n;
	newnode->next = NULL;
	if (*head == NULL)
		*head = newnode;
	else
	{
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		temp->next = newnode;
	}
	return (newnode);
}

