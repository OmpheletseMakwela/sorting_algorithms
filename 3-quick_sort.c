#include "sort.h"
#include <stdio.h>
#include <stdib.h>

/**
 * exc_ints - exchanges two integers in an array.
 * @a: The first integer to exchange.
 * @b: The second integer to exchange.
 */
void exc_ints(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * lomuto_part - Order a subset of an array of integers accordingly.
 * @array: The array of integers.
 * @size:  size of the array.
 * @start: starting index.
 * @end: ending index.
 * Return: final partition index.
 */
int lomuto_part(int *array, size_t size, int start, int end)
{
	int *pivot, above, below;

	pivot = array + end;
	for (above = below = start; below < end; below++)
	{
		if (array[below] < *pivot)
		{
			if (above < below)
			{
				swap_ints(array + below, array + above);
				print_array(array, size);
			}
			above++;
		}
	}

	if (array[above] > *pivot)
	{
		swap_ints(array + above, pivot);
		print_array(array, size);
	}

	return (above);
}

/**
 * lomuto_sort - Implement the quicksort algorithm through recursion.
 * @array: An array of integers to sort.
 * @size: The size of the array.
 * @start: The starting index.
 * @end: The ending index.
 */
void lomuto_sort(int *array, size_t size, int start, int end)
{
	int par;

	if (end - start > 0)
	{
		part = lomuto_part(array, size, start, end);
		lomuto_sort(array, size, start, p - 1);
		lomuto_sort(array, size, p + 1, end);
	}
}

/**
 * quick_sort - Sort an array of integers in ascending order.
 * @array: An array of integers.
 * @size: The size of the array.
 */
void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	lomuto_sort(array, size, 0, size - 1);
}
