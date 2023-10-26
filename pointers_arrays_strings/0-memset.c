/**
 * _memset - Is a function that fills memory with a constant byte.
 * @s: Memory area pointed to by s.
 * @b: Constant byte b.
 * @n: First n bytes of the memory area.
 * Return: Pointer to the memory area s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}

	return (s);
}
