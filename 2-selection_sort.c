#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 *selection_sort - sorts an array of integers
 *using the Selection sort algorithm
 *@array: array to be sorted
 *@size: size of the array
 */

void selection_sort(int *array, size_t size)
{
	int temp = 0;
	size_t current_i;
	size_t i, j;

	for (i = 0; i < size; i++)
	{
		current_i = i;

		for (j = i + 1; j < size; j++)
		{
			if (array[current_i] > array[j])
				current_i = j;
		}
		if (current_i != i)
		{
			temp = array[i];
			array[i] = array[current_i];
			array[current_i] = temp;
			print_array(array, size);
		}
	}
}
