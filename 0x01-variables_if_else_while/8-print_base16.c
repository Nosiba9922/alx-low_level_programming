#include <stdio.h>
/**
 * main - main blok
 *
 * Return: 0
 */
int main(void)
{
	int c;
	char i;

	for (c = 0; c<= 9; c++)
		putchar(c % 10 +'0');

	for (i = 'a'; i<='f'; i++)
		putchar(i);

	putchar('\n');
	return (0);
}
