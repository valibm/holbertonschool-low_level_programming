/**
 * print_name - Is a function that prints a name.
 * @name: name of the person
 * Return: Nothing.
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return (NULL);
	(*f)(name);
}
