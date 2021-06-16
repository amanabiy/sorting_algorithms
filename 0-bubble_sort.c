#include "sort.h"

/**
 * swap - swaps the two given elements data
 * @a: the first element
 * @b: the second element
 */

void swap(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}

/**
 * bubble_sort - sorts the given array in asscending order
 * @array: the array to be sorted
 * @size: The sieze of the array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;

	if (!array || size <= 0)
		return;

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size - i - 1; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
			}
		}
	}
}
