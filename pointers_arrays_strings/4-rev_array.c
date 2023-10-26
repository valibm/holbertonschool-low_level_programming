/**
 * reverse_array - Is a function that reverses the content of an array
 * of integers.
 * @a: an array of integers
 * @n: the number of elements of the array
 * Return: Void.
 */
void reverse_array(int *a, int n)
{
	int i = 0, j;

	while (i < n--)
	{
		j = a[i];
		a[i++] = a[n];
		a[n] = j;
	}
}
