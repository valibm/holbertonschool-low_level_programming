/**
 * swap_int - Is a function that swaps the values of two integers.
 * @a: pointer to type int.
 * @b: pointer to type int.
 * Return: Void.
 */
void swap_int(int *a, int *b)
{
	*a = *a + *b;
	*b = *a - *b;
	*a = *a - *b;
}
