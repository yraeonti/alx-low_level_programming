#include "function_pointers.h"

/**
 * int_index - entry point
 * @array: array
 * @size: int
 * @cmp: pointer to func
 * Return: int
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i, res;

	if (size <= 0)
		return (-1);
	for (i = 0; i < size; i++)
	{
		res = cmp(array[i]);
		if (res != 0)
			return (i);
	}
	return (-1);
}
