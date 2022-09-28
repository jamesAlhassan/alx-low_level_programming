/**
 * _strlen_recursion -  returns the length of a string.
 * @s: pointer parameter
 * Return: length of the poniter value
 */

int _strlen_recursion(char *s)
{
if (*s == '\0')
return (0);

s++;
return (1 + _strlen_recursion(s));
}
