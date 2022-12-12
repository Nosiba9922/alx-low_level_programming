#include <stdio.h>
/**
 * main - main block
 * Description: prints the alphabet in lower case,
 * and then in uppercase, followed by a new line .
 * Return: 0
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}

	c = 'A';

	while (c <= 'Z')
	{
		putchar('\n');
		return (0);
	}
