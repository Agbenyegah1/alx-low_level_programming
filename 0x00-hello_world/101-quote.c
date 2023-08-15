#include <unistd.h>

/**
 * main - Entry point for the program
 *
 * Description: Prints the specified string to the standard error
 *              without using restricted functions and returns 1.
 *
 * Return: Always 1 (Error)
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
