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

	for (c = '0' ; c <= '9' ; c++)
	{
		for (i = '0' ; i <= '9' ; i++)
		{
			putchar(c);
			putchar(i);
			if (i < '9' || c < '9')
			{
				putchar(',');
				putchar(' ');
			}

		}

	}
	putchar('\n');
	return (0);
}
