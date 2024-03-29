#include "sort.h"
#include <stdio.h>

/**
 * swap - Writing a fxn that swaps 2 int values
 * @array: the integer array to sort
 * @size: the size of the array
 * @a: address of first value
 * @b: address of second value
 *
 * Return: void
 */

void swap(int *array, size_t size, int *a, int *b)
{
	if (*a != *b)
	{
		*a = *a + *b;
		*b = *a - *b;
		*a = *a - *b;
		print_array((const int *)array, size);
	}
}

/**
 * lomuto_partition - Writing a fxn that partitions the array
 * @array: the integer array to sort
 * @size: the size of the array
 * @lo: the low index of the sort range
 * @hi: the high index of the sort range
 *
 * Return: void
 */

size_t lomuto_partition(int *array, size_t size, ssize_t lo, ssize_t hi)
{
	int w, j, pivot = array[hi];

	for (w = j = lo; j < hi; j++)
		if (array[j] < pivot)
			swap(array, size, &array[j], &array[w++]);
	swap(array, size, &array[w], &array[hi]);

	return (w);
}

/**
 * quicksort - Writing a fxn that quicksorts via Lomuto partitioning scheme
 * @array: the integer array to sort
 * @size: the size of the array
 * @lo: the low index of the sort range
 * @hi: the high index of the sort range
 *
 * Return: void
 */

void quicksort(int *array, size_t size, ssize_t lo, ssize_t hi)
{
	if (lo < hi)
	{
		size_t p = lomuto_partition(array, size, lo, hi);

		quicksort(array, size, lo, p - 1);
		quicksort(array, size, p + 1, hi);
	}
}

/**
 * quick_sort - Writing a fxn that calls quicksort
 * @array: the integer array to sort
 * @size: the size of the array
 *
 * Return: void
 */

void quick_sort(int *array, size_t size)
{
	if (!array || !size)
		return;
	quicksort(array, size, 0, size - 1);
}
