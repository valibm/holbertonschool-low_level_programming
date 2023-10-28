/**
 * _strspn - Is a function that gets the length of a prefix substring.
 * @s: main (checked) string.
 * @accept: prefix substring.
 * Return: number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
	int length = 0, check;
	char *start = accept;

	while (*s)
	{
		check = 0;
		while (*accept)
		{
			if (*accept == *s)
			{
				length++;
				check = 1;
				break;
			}
			accept++;
		}
		s++;
		accept = start;
		if (check == 0)
			break;
	}

	return (length);
}
