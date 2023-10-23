/**
 * _strcpy - a function that copies the string pointed to by src, including the
 *  terminating null byte (\0), to the buffer pointed to by dest.
 * @dest: string that receives src's content.
 * @src: source string that's being copied.
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
	{
		*dest++ = *src++;
	}

	return (temp);
}
