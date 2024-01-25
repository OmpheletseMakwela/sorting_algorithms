#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * exc_ints - exchanges two integers in an array.
 * @x: The first integer to exchange.
 * @y: The second integer to exchange.
 */
void exc_ints(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * selection_sort - Sorts an array of integers in ascending order.
 * @array: An array of integers.
 * @size: The size of the array.
 */
void selection_sort(int *array, size_t size)
{
	int *minimum;
	size_t i, n;

	if (array == NULL || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		minimum = array + i;
		for (n = i + 1; n < size; n++)
			minimum = (array[n] < *minimum) ? (array + n) : minimum;

		if ((array + i) != minimum)
		{
			exc_ints(array + i, minimum);
			print_array(array, size);
		}
	}
}
