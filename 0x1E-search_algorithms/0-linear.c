#include "search_algos.h"

/**
 * linear_search - This function that searches for a value in an
 * array of integers using the Linear search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in array
 * @value: Value to be searched for in the array
 *
 * Return: The first index where value is located
 * or -1 if value is not found or if array is NULL
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array != NULL)
	{
		for (i = 0; i < size; i++)
		{
			printf("Value checked array[%lu] = [%d]\n", i, array[i]);
			if (array[i] == value)
			{
				return (i);
			}
		}
	}
	return (-1);
}