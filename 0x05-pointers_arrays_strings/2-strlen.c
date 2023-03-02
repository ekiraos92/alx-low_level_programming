#include "main.h"
/**
 * _strlen - returns lenght of string
 * @s: parameter
 *
 * Return: lenght
 */
int _strlen(char *s)
{
	int a = 0;

	for (; *s++;)
		a++;
	return (a);
}
