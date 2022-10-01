#include <stdio.h>

/**
 * main - prints the name of a program and a new line.
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 if success
 */

int main(int argc, char *argv[])
{
	if (argc >= 1)
		printf("%s\n", argv[0]);
	return (0);
}
