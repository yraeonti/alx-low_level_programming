#include "function_pointers.h"

/**
  * array_iterator - entry point
  * @array: array 
  * @size: size of array
  * @action: pointer to fuc
  */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	if (size < 0)
		;
	array_iterator(array, size - 1, action);
	action(array[size]);
}
