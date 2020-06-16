#include "sort.h"
void swap(int *first, int *second);
void quick(int *arr, int low, int high, size_t size);
int partition(int arr[], int low, int high, size_t size);

/**
 * quick_sort - sorting algorithm
 * @array: data
 * @size: size data
 * Return: nothing.
*/
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size <= 1)
		return;
	quick(array, 0, size - 1, size);
}
/**
 * quick -The main function that implements QuickSort
 * @arr: array
 * @low: Starting index
 * @high: Ending index
 * @size: size of data
 *
 * Return: nothing
*/
void quick(int *arr, int low, int high, size_t size)
{
	int pi;

	if (low < high)
	{
		pi = partition(arr, low, high, size);

		quick(arr, low, pi - 1, size);
		quick(arr, pi + 1, high, size);
	}

}

/**
 * partition -This function takes last element as pivot, places
 * the pivot element at its correct position in sorted
 * array, and places all smaller (smaller than pivot)
 * to left of pivot and all greater elements to right
 * of pivot
 *
 * @arr: array
 * @low: Starting index
 * @high: Ending index
 * @size: size of data
 *
 * Return: index
*/
int partition(int *arr, int low, int high, size_t size)
{
	int i = low - 1;
	int j, sw;

	for (j = low; j < high; j++)
	{
		if (arr[j] <= arr[high])
		{
			i++;
			if (i != j)
			{
				sw = arr[i],
				arr[i] = arr[j];
				arr[j] = sw;
				print_array(arr, size);
			}
		}
	}
	if (i + 1 != high)
	{
		swap(&arr[i + 1], &arr[high]);
		print_array(arr, size);
	}
	return (i + 1);
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
