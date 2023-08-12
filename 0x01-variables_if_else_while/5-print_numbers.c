#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always success (0)
 */
int main(void)
{
	int num = 0;

	while (num < 10)
	{
		printf("%d", num);
		num++;
	}
	putchar('\n');
	return (0);
}
