#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int i;

	i = '0';
	c = '0';
	while (c <= '9')
	{
		while (i <= '9')
		{
			putchar(c);
			putchar(i);
			if (i < '9' || i < '9')
			{
				putchar(',');
				putchar(' ');
			}
			i++;
		}
		c++;
	}
	putchar('\n');
	return (0);
}
