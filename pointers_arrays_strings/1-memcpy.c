/**
 * _memcpy - Is a function that copies memory area.
 * @src: Memory area that's being copied.
 * @dest: Memory area that's being added n bytes of memory from src.
 * @n: First n bytes of the memory area of src.
 * Return: Pointer to the memory area dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = *(src + i);
	}

	return (dest);
}
