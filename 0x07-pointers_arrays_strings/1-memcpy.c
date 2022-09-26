
/**
 * _memcpy - copies memory area.
 * @dest: copied to-  destination 
 * @src: copied from-  source
 * n: bytes
 * Return: pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i = 0, len = 0, j;
/** Calculating the length of src **/
while (src[i] != '\0')
{
len++;
i++;
}
for (j = 0; j < len; j++)
{
dest[j] = src[j];
}
return (dest);
}
