/**
 * _strcmp - Is a function that compares two strings.
 * @s1: string type value.
 * @s2: string type value
 * Return: If strings are equal returns 0, otherwise first different
 * caracters subtraction value.
 */
int _strcmp(char *s1, char *s2)
{
	int i, sub;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		sub = s1[i] - s2[i];

		if (sub == 0)
		{
			continue;
		}
		else
		{
			return (sub);
		}
	}

	return (sub);
}
