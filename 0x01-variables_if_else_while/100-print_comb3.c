#include <stdio.h>
/**
 * main - Entry point for the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 0;

	while (num1 < 10)
	{
		int num2 = num1 + 1;

		while (num2 < 10)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');

			if (num1 < 8)
			{
				putchar(',');
				putchar(' ');
			}

			num2++;
		}

		num1++;
	}

	putchar('\n');
	return (0);
}
