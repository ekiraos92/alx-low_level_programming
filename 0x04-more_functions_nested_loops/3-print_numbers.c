#include "main.h"

/**
 * print_numbers - print numbers from 0 to 9
 * Return: always 0)
 */
void print_number(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
	_putchar(x + '0');
	}
	_putchar('\n');
}

