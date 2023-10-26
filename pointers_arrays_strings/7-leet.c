/**
 * leet - Is a function that encodes a string into 1337.
 * @str: String type parameter to be encoded.
 * Return: Encoded str.
 */
char *leet(char *str)
{
	int i, j;
	char letters[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'},
		nums[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == letters[j])
			{
				str[i] = nums[j];
			}
		}
	}

	return (str);
}
