int is_prime_number_helper(int n, int start);

/**
 * is_prime_number - a function that returns 1 if the input
 * integer is a prime number, otherwise return 0.
 * @n: int number to be checked.
 * Return: 1 if the input integer is a prime number, otherwise return 0..
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}

	return (is_prime_number_helper(n, 2));
}

/**
 * is_prime_number_helper - helper function for is_prime_number.
 * @n: int number to be checked.
 * @start: stable starting point for checking.
 * Return: 1 if the input integer is a prime number, otherwise return 0.
 */
int is_prime_number_helper(int n, int start)
{
	float n2 = (float) n, sub;
	int sub_int;

	sub = n2 / start;
	sub_int = n2 / start;

	if (n == start)
	{
		return (1);
	}
	else if (sub - sub_int == 0)
	{
		return (0);
	}
	else
	{
		return (is_prime_number_helper(n, start + 1));
	}
}
