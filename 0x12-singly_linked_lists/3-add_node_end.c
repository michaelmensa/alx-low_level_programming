#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node_end - function that adds a new node at the end of a list_t list
 * @head: input header pointer
 * @str: Input string value
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *add_new;
	list_t *aux;

	add_new = malloc(sizeof(list_t));
	if (add_new == NULL)
		return (NULL);
	add_new->len = _strlen(str);
	add_new->str = strdup(str);
	add_new->next = NULL;
	if (*head == NULL)
		*head = add_new;
	else
	{
		aux = *head;
		while (aux->next != NULL)
			aux = aux->next;
		aux->next = add_new;
	}
	return (add_new);
}

/**
 * _strlen - returns length of string
 * @s: character of string
 * Return: length of string
 */

int _strlen(const char *s)
{
	const char *str_node;
	int num;

	num = 0;
	str_node = s;

	while (*str_node != '\0')
	{
		num++;
		str_node++;
	}
	return (num);
}
}
