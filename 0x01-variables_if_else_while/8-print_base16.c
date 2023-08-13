#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		putchar(num + '0');
		num++;
	}

	num = 0;
	while (num < 6)
	{
		putchar(num + 'a');
		num++;
	}

	putchar('\n');
	return (0);
}
