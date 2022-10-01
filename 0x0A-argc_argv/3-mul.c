#include <stdio.h>
#include <stdlib.h>

/**
* main -prints results of multiplication
* @argc: argument count
* @argv: argument vector
* Return: 0 if success
*/
int main(int argc, char *argv[])
{
	int mult;

	if (argc == 3)
	{
		mult = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mult);
		return (0);
	}
	else
	{
		printf("Error\n");
		return (1);
	}
}
