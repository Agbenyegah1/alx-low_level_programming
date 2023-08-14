#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program generates and prints all possible combinations
 * of two two-digit numbers in ascending order, separated by comma and space.
 * The combinations are generated within the range of 00 to 99 for both numbers.
 * Each number is printed with two digits (e.g., 01, 23, 99).
 * Combinations are separated by a comma and a space.
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num1 = 0;

	while (num1 < 100)
	{
		int num2 = 0;

		while (num2 < 100)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');

			putchar(' ');

			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (num1 < 99 || num2 < 99)
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
