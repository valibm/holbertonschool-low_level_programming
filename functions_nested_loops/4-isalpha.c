#include "main.h"

/**
 * _isalpha - check if a character is alphanumeric.
 * @c: character to be checked
 * Return: Always 0.
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
