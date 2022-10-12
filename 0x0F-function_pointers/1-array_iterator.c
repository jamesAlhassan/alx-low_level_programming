
/**
 * array_iterator - executes a function on param of each array element.
 * @array: an array
 * @size: size of array
 * @action: function pointer
 * Return: void
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i = 0;

	if (!array || !action)
		return;

	while (i < size)
	{
		(*action(array[i]));
		i++

	}
}

