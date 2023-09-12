#include "search_algos.h"

/**
 * Protopype - int binary_search(int *array, size_t size, int value)
 * @array: pointer to the array
 * @size: size of the array
 * @value: value to search for
 * 
 * Description; function that searches for a value using the binary search
 * algorithm
 *
 * Return: value if successful and -1 if not successful
 */

int binary_search(int *array, size_t size, int value)
{
    int left = 0;
    int right = size -1;
    int middle;
    int i;

    if (array == NULL || size == 0)
        return (-1);

    while (left <= right)
    {
        middle = left + (right - left) / 2;

        printf("Searching in array: ");
        for (i = left; i <= right; i++)
        {
            printf("%d", array[i]);
            if (i < right)
                printf(", ");
        }
        printf("\n");

        if (array[middle] == value)
            return (middle);
        else if (array[middle] < value)
            left = middle + 1;
        else
            right = middle -1;
    }

    return (-1);
}
