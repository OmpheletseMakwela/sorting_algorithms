#include "sort.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * exc_ints - exchanges two integers in an array.
 * @a: The first integer.
 * @b: The second intege.
 */
void exc_ints(int *x, int *y)
{
	int tmp;

	tmp = *x;
	*x = *y;
	*y = tmp;
}

/**
 * shell_sort - Sort an array of integers in ascending order.
 * @array: An array of integers.
 * @size: The size of the array.
 */
void shell_sort(int *array, size_t size)
{
	size_t space, a, b;

	if (array == NULL || size < 2)
		return;

	for (space = 1; space < (size / 3);)
		space = space * 3 + 1;

	for (; space >= 1; space /= 3)
	{
		for (a = space; a < size; a++)
		{
			b = a;
			while (b >= space && array[b - space] > array[b])
			{
				exc_ints(array + b, array + (b - space));
				b -= space;
			}
		}
		print_array(array, size);
	}
}
