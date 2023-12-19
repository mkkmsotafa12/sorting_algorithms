#include "sort.h"

/**
 * selection_sort - that sorts an array of integers in ascending
 * order using the Selection sort algorithm
 *
 * @array: an array
 * @size: size of array
 * Return: void
 */

void selection_sort(int *array, size_t size)
{
	size_t i, j, num;
	int tmp;

	if (!size || !array)
		return;

	for (i = 0; i < size - 1; i++)
	{
		for (j = size - 1, num = i + 1; j > i; j--)
		{
			if (array[j] < array[num])
			{
				num = j;
			}
		}
		if (array[i] > array[num])
		{
			tmp = array[i];
			array[i] = array[num];
			array[num] = tmp;
			print_array(array, size);
		}
	}
}
