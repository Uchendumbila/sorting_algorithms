#include "sort.h"
#include <stdio.h>

/**
 *selection_sort- Writing a fxn that sorts using selection sort algorithm
 *
 *@array: array to be sorted
 *@size: size of the array
 *
 */

void selection_sort(int *array, size_t size)
{
	size_t w, j, m;
	int temp;

	if (!array || !size)
		return;
	for (w = 0; w < size - 1; w++)
	{
		for (j = size - 1, m = w + 1; j > w; j--)
		{
			if (array[j] < array[m])
			{
				m = j;
			}
		}
		if (array[w] > array[m])
		{
			temp = array[w];
			array[w] = array[m];
			array[m] = temp;
			print_array(array, size);
		}
	}
}
