#include "main.h"

/**
 * _abs - computes absolute value
 *
 *@a: paremeter to be checked
 *Return: returns a
 *
 */
int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
