#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint - function that adds a new node at the beginning of
  * a listint_t list.
  * @head: header pointer
  * @n: int data type
  * Return: address of the new element
  */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint-t *new_node;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}
