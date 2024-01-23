#include "sort.h"

/**
 *bubble_sort - Writing a fxn that sorts an array of ints
 *using bubble sort algorithm
 *
 *@array: array of ints
 *@size: size of array
 *
 */

void bubble_sort(int *array, size_t size)
{
	int temp;
	size_t w, m;

	if (!array || !size)
		return;

	w = 0;
	while (w < size)
	{
		for (m = 0; m < size - 1; m++)
		{
			if (array[m] > array[m + 1])
			{
				temp = array[m];
				array[m] = array[m + 1];
				array[m + 1] = temp;
				print_array(array, size);
			}
		}
		w++;
	}
}
