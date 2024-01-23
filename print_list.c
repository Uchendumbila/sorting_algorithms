#include "sort.h"
#include <stdio.h>

/**
 * print_list - Writing a fxn that Prints a list of integers
 *
 * @list: The list to be printed
 */

void print_list(const listint_t *list)
{
	int w;

	w = 0;
	while (list)
	{
	    if (w > 0)
	        printf(", ");
	    printf("%d", list->n);
	    ++w;
	    list = list->next;
	}
	printf("\n");
}
