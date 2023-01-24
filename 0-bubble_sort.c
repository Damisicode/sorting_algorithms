#include "sort.h"

/**
 * bubble_sort - implementing bubble sort Algorithm
 * @array: integer array to be sorted
 * @size: size_t size of the array
 */

void bubble_sort(int *array, size_t size)
{
	size_t i, temp, swap;

	swap = 1;
	while (swap != 0 && size >= 2)
	{
		swap = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				swap = 1;
				print_array(array, size);
			}
		}
	}
}
