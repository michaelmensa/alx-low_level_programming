# include "hash_tables.h"
/**
  * hash_table_set - function that adds an element to the hash table
  * @ht: hash table to add or update key/value
  * @key: key cannot be an empty string
  * @value: value associated with key. Value must be duplicated.
  *         value can be an empy string.
  *
  * In case of collision, add the new node at the beginning of the list
  *
  * Return: 1 if succeeded, 0 if otherwise
  */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_node_t *new_node;
	unsigned long int size, index;

	if (ht == NULL || key == NULL)
		return (0);
	size = ht->size;
	index = key_index((const unsigned char *)key, size);
	if (ht->array[index] != NULL && strcmp(ht->array[index]->key, key) == 0)
	{
		ht->array[index]->value = strdup(value);
		return (1);
	}
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);
	new_node->key = strdup(key);
	new_node->value = strdup(value);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
