
/**
 * _memcpy - copies memory area.
 * @dest: copied to-  destination
 * @src: copied from-  source
 * @n: bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int j;
for (j = 0; j < n; j++)
{
dest[j] = src[j];
}
return (dest);
}
