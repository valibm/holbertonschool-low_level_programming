/**
 * factorial - Is a function that returns the factorial of a given number.
 * @n: int type number indicating the number of factorial.
 * Return: n factorial.
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}

	return (n * factorial(n - 1));
}
