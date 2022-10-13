#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_itertor - executes a function given s a parameter
 * in each element of an array
 * @array: array to iterate over
 * @action: pointer to function used
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsighed int i;

	if (!array || !action)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
