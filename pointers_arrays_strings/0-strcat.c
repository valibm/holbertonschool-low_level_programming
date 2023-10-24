/**
 * _strcat - Is a function that concatenates two strings.
 * @dest: destination string.
 * @src: added string.
 * Return: concatanated strings.
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, j;

	while (dest[i] != '\0')
	{
		i++;
	}

	for (j = 0; src[j] != '\0'; j++)
	{
		dest[i] = src[j];
		i++;
	}

	return (dest);
}
