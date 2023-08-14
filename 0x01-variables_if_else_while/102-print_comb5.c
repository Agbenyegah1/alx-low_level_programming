#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program generates and prints all possible combinations
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
		int num2 = num1;

		while (num2 < 100)
		{
			if (num1 != num2)
			{
				putchar((num1 / 10) + '0');
				putchar((num1 % 10) + '0');

				putchar(' ');

				putchar((num2 / 10) + '0');
				putchar((num2 % 10) + '0');

				if (num1 < 98 || num2 < 99)
				{
					putchar(',');
					putchar(' ');
				}
			}

			num2++;
		}

		num1++;
	}

	putchar('\n');

	return (0);
}
