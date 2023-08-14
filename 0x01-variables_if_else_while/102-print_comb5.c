#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program generates and prints all possible combinations
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
