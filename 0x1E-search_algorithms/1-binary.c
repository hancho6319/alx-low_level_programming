#include "search_algos.h"


/**
 * binary_search - function that searches for a value in a
 * sorted array of integers using the Binary search algorithm
 *
 * @@array: is a pointer to the first element of
 * the array to search in
 *
 * @size: is the number of elements in array
 * @value: is the value to search for
 *
 * Return: The first index of the value in the array, otherwise -1.
 *
 */

int binary_search(int *array, size_t size, int value)
{
	return (binary_search_index(array, 0, size - 1, value));
}

