/**
 * _strncpy - Is  a function that copies a string to a given length.
 * @dest: string that receives src's content.
 * @src: source string that's being copied.
 * @n: limitation int.
 * Return: Always 0.
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
		dest[i] = '\0';

	return dest;
}
