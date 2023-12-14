#include "search_algos.h"

/**
 * binary_search - function that searches for a
 * value in a sorted array of integers using the
 *
 * @array: pointer to the first element of the
 * array to search in
 *
 * @size:  is the number of elements in array
 *
 * @value: is the value to search fo
 *
 * Return: The first index of the value in the array, otherwise -1.
 *
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	for (i = 0; (i < size) && (array); i++)
	{
		if (*(array + i) == value)
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
			return (i);
		}
		else
		{
			printf("Value checked array[%d] = [%d]\n", (int)i, array[i]);
		}
	}
	return (-1);
}
