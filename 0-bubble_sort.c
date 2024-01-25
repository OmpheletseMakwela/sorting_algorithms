#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * esc_ints - mixes two integers.
 * @x: The first integer to exchange.
 * @y: The second integer to exchange.
 */
void esc_ints(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * bubble_sort - Sorts an array of integers in ascending order.
 * @array: Array of integers to sort.
 * @size: Size of the array.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool f = false;

	if (array == NULL || size < 2)
		return;

	while (f == false)
	{
		f = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				esc_ints(array + i, array + i + 1);
				print_array(array, size);
				f = false;
			}
		}
		len--;
	}
}
