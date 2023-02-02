#include "hash_tables.h"

/**
  * hash_table_create - function that create a hash table
  * @size: size of the array
  *
  * Return: a pointer to the newly created hash table
  * return NULL if something goes wrong
  */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *hash_t = malloc(sizeof(hash_table_t));
	unsigned long int i;

	if (hash_t == NULL)
		return (NULL);
	hash_t->size = size;
	hash_t->array = malloc(sizeof(hash_table_t) * size);

	if (hash_t->array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		hash_t->array[i] = NULL;

	return (hash_t);
}
