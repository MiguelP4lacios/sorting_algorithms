#include "sort.h"
void swap(int *first, int *second);

/**
 * bubble_sort - sorting algorithm
 * @array: data
 * @size: size data
 * Return: nothing.
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int swapped = 0;

	if (array == NULL || size <= 1)
		return;
	for (i = 0; i < size - 1 ; i++)
	{
		swapped = 0;
		for (j = 0; j < size - 1 - i; j++)
		{
			if (array[j] > array[j + 1])
			{
				swap(&array[j], &array[j + 1]);
				print_array(array, size);
				swapped = 1;
			}
		}
		if (swapped == 0)
			break;
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
