#include <stdio.h>

/**
 * main - performs function
 *
 * Return: always 0
 *
 */
int main(void)
{
	int i;
	int j;

	while (i <= 9)
	{
		j = i + 1;
		while (j <= 9)
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
		putchar(j + '0');
		j++;
	}
	i++;
	}

	putchar('\n');
	return (0);

}
