#include "sort.h"

/**
 * swap_ints -Two integers that are swapped in an array.
 * @x:first integer swapped
 * @y:second integer swapped
 */
void swap_ints(int *x, int *y)
{
	int tmp;

	tmp = *a;
	*x = *y;
	*y = tmp;
}

/**
 * bubble_sort -An array of integers sorted in ascending order.
 * @array:Array of integers to sort.
 * @size:size of the array.
 *
 * Description: Printing the array after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
