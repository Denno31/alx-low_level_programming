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
	char chr;

	chr = 'a';
	while (chr <= 'z')
	{
		if (chr != 'q' && chr != 'e')
			putchar(chr);
		chr++;
	}
	putchar ('\n');
	return (0);
}
