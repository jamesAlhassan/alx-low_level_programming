/**
 * int_index -  searches for an integer.
 * @array: an array
 * @size: number of elements in array
 * @cmp: function pointer
 * Return: index of first element if cmp does not return 0
 * else return -1
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if ((*cmp)(array[i]) != 0)
				return (i);
		}
	}
	return (-1);
}
