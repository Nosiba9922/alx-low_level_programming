#include <stdio.h>i
#include <stdio.h>
#include <stdio.h>
/**
 * main - entry point of programs
 *
 * Return: return 0
 */
int main(void)
{
	int n;
	srand(time(0));
	n = rand() -RAND_MAX / 2;
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else
		printf("%d is Zero\n, n);
	return (0);
