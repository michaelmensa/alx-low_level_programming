#include "search_algos.h"

/**
 * Prototype - int linear_search(int *array, size_t size, int value)
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * @value: value to search for
 * Return - index where value is located if found, -1 for otherwise.
 *
 * Description - searches linearly through an array
 *               of elements
 */

int linear_search(int *array, size_t size, int value)
{
    size_t i;
   
    if (array == NULL)
        return (-1);
    for (i = 0; i < size; i++)
    {
        printf("Value checked array[%ld] = [%d]\n",i , array[i]);
        if (array[i] == value)
            return (i);
    }
    return (-1);
}
