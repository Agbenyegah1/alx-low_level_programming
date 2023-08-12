#include <stdio.h>
/**
 * main - Entry point of the program
 *
 * Return: Always success (0)
 */
int main(void)
{
	char lowercase_letter = 'a';

	while (lowercase_letter <= 'z')
	{
		if (lowercase_letter != 'e' && lowercase_letter != 'q')
		{
			putchar(lowercase_letter);
		}
		lowercase_letter++;
	}
	putchar('\n');
	return (0);
}
