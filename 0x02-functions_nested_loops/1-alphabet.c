#include "holberton.h"

/**
 * main - tests function that prints if integer is positive or negative
 * Return: 0
 */
void print_alphabet(void)
{
	char ch;

	ch = 'a';
	while (ch <= 'z')
	{
		_putchar(ch);
		ch++;
	}
	_putchar('\n');
}
