#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Description: This program prints all possible different combinations
 * of three digits in ascending order, separated by ", ".
 * The combinations are generated without repeating digits.
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
            int num3 = num2 + 1;

            while (num3 < 10)
            {
                putchar(num1 + '0');
                putchar(num2 + '0');
                putchar(num3 + '0');

                if (num1 < 7)
                {
                    putchar(',');
                    putchar(' ');
                }
                num3++;
            }
            num2++;
        }
        num1++;
    }

    putchar('\n');

    return (0);
}
