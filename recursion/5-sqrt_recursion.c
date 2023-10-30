int _sqrt_recursion_helper(int root, int num);

/**
 * _sqrt_recursion - Is a function that returns the natural square
 * root of a number.
 * @n: int number.
 * Return: Natural square root of n, if n does not have a natural square root
 * function returns -1.
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else if (n == 0)
	{
		return (0);
	}

	return (_sqrt_recursion_helper(1, n));
}

/**
 * _sqrt_recursion_helper - Helper function for _sqrt_recursion.
 * @root: int num starting from 1 to num / 2;
 * @num: int number.
 * Return: Natural square root of num, if num does not have a natural
 * square root function returns -1.
 */
int _sqrt_recursion_helper(int root, int num)
{
	if (root > num / 2)
	{
		return (-1);
	}
	else if (root * root == num)
	{
		return (root);
	}
	else
	{
		return (_sqrt_recursion_helper(root + 1, num));
	}
}
