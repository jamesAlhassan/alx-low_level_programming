/**
 * _strchr - locates a character in a string
 * @s: the string to locate the character "c"
 * @c: the character to locate
 * Return: pointer to first occurence of c otherwise NULL
 */

char *_strchr(char *s, char c)
{
int i = 0;

while (*s != '\0')
{
if (*s == c)
    return (s);
}
else
{
return (NULL);
}
}
