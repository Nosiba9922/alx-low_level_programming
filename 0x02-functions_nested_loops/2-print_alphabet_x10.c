#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10 time.
 *
 * Return: Always 0
 */
void print_alphabet_x10(void)
{
	int i;
	char alpha;

	for (i = 0; i <= 9; i++)
	{
		fopr (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar(alpha);
		}
		_putchar('\n');
	}
}
