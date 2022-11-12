#include "main.h"
#include <stdlib.h>

/**
 * *array_range - creates an array of integers
 * @min: min range
 * @max: number of elements
 * Return: pointer to the new array
 */

int *array_range(int min, int max)
{

	int *pntr;
	int x, size;

	if (min > max)
		return (NULL);
	size = max - min + 1;
	pntr = malloc(sizeof(int) * size);

	if (pntr == NULL)
		return (NULL);
	for (x = 0; min <= max; x++)
		pntr[x] = min++;

	return (pntr);
}
