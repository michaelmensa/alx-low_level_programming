#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - allocated memory for nmemb elements
 * @nmemb: number of elements in array
 * @size: bytes for each element
 * Return: 0
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);

	if (ptr == NULL)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
		*(ptr + a) = 0;
	return ((void *)ptr);
}
