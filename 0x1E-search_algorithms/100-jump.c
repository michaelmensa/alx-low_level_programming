#include <math.h>
#include "search_algos.h"

/**
 * Prototype -  int jump_search(int *array, size_t size, int value)
 * @array: Pointer to the first element of the array to search in
 * @size: size is the number of elements in array
 * @value: value to search for
 *
 * Description: function that searches through an ordered list using the
 * jump search algorithm. sqrt() from math.h library is used as the jump
 * step
 *
 * Return; value if successful, -1 if otherwise.
 */

int jump_search(int *array, size_t size, int value)
{
    size_t prev = 0, jump, index = 0;

	if (array == NULL || size == 0)
		return (-1);

	jump = sqrt(size);
	for (; array[index] < value && index < size;)
	{
		printf("Value checked array[%ld] = [%d]\n", index, array[index]);
		if (!(array[index] < value) || !(index < size))
			break;
		prev = index;
		index += jump;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", prev, index);

	for (; prev <= index && prev < size; prev++)
	{
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}
