#include <unistd.h>

/**
 * main - Print "and that piece of art is useful" - Dora Korpar, 2015-10-19",
 *		followed by anew lint, to the standard error.
 * Returns: will return 1
 *
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
