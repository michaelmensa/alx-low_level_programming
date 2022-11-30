#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
  * add_node - function that prints all the elements of a list_t list
  * @head: input head pointer
  * @str: input string value
  * Return: address of the new element, or NULL if it failed
  */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node;

	new_node = malloc(sizeof(list_t));
	if (new_node == NULL)
		return (NULL);
	new_node->len = _strlen(str);
	new_node->str = strdup(str);
	new_node->next = *head;
	*head = new_node;
	return (new_node);
}

/**
  * _strlen - returnslength of string
  * @s: character of string
  * Return: length of string
  */

int _strlen(const char *s)
{
	const char *str_node;
	int num = 0;

	str_node = s;
	while (*str_node != '\0')
	{
		num++;
		str_node++;
	}
	return (num);
}

