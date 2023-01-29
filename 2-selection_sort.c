#include "sort.h"

/**
 * selection_sort - sorts an array of integers in ascending order using the
 * selection sort algorithm
 * @array: integer array to be sorted
 * @size: size_t datatype of length of the array
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min_pos, numb, check;

	for (i = 0; i < size; i++)
	{
		check = 0;
		min_pos = i;
		for (j = i; j < size; j++)
		{
			if (array[j] < array[min_pos])
			{
				min_pos = j;
				check = 1;
			}
		}
		if (check == 1)
		{
			numb = array[i];
			array[i] = array[min_pos];
			array[min_pos] = numb;
			print_array(array, size);
		}
	}
}
