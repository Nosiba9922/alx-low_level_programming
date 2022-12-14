#include "main.h"

/**
 * _isalpha - A program that shows 1 if the input is c
 * letter Another cases, shows 0
 *
 * @c: The Character is ASCII code
 *
 * Return: 1 for letters. Returns
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n')
}
