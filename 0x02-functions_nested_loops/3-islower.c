#include "main.h"

/**
 * _islower - prints if lowercase
 *
 *@c: parameter that is to be printed
 *
 * Return: 1 for lower 0 otherwise
 *
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
