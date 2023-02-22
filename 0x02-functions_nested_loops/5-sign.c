#include "main.h"

/**
 * print_sign -prints n
 *
 * @n: parameter to be checked
 * Return: returns 1,0,-1 with conditions
 *
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else  if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar ('-');
		return (-1);
	}

}
