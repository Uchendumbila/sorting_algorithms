#include "sort.h"
#include <stdio.h>

/**
* shell_sort - Writing a fxn that function sorts an array of integers using
* the shell sort algorithm with Knuth sequence
* @array: the array of integers
* @size: size of the array
*
* Return: none
*/

void shell_sort(int *array, size_t size)
{
	size_t gap = 0, j, x;
	int tmp;

	if (size < 2)
		return;

	while ((gap = gap * 3 + 1) < size)
		;

	gap = (gap - 1) / 3;

	for (; gap > 0; gap = (gap - 1) / 3)
	{
		for (x = gap; x < size; x++)
		{
			tmp = array[x];
			for (j = x; j >= gap && tmp <= array[j - gap]; j -= gap)
				array[j] = array[j - gap];
			array[j] = tmp;
		}
		print_array(array, size);
	}
}
