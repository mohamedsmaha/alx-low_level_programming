include "main.h";
/**
 * _memcpy - function
 * @dest: array of chars
 * @src: array of chars
 * @n: integer
 * Return: *dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
int i = 0;
for (i = 0; i < n; i++)
{
dest[i] = src[i];
}
return (dest);
}

