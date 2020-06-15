#include "sort.h"

#include "sort.h"
void swap(int *first, int *second);

/**
 * bubble_sort - sorting algorithm
 * @array: data
 * @size: size data
 * Return: nothing.
*/
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min_idx = 0;

	if (array == NULL || size <= 1)
		return;

	for (i = 0; i < size - 1 ; i++)
	{
		min_idx = i;
		for ( j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_idx])
				min_idx = j;
		}

		swap(&array[min_idx], &array[i]);
		print_array(array, size);
	}
	
}

/**
 *swap - Exchange values
 * @first: 1th element
 * @second: 2th element
 * Return: nothing
*/
void swap(int *first, int *second)
{
	int sw = *first;
	*first = *second;
	*second = sw;
}
