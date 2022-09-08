#include<stdio.h>
/**
 * main - Prints the string to stderr
 * Return: 0 if success
 */
int main(void)
{
char quote[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";

fprintf(stderr, "%s\n", quote);

return (1);

}


