#include <main.h>
#include <stdlib.h>

/**
 * _isdigit - Checks if a string is composed of digits.
 * @str: The string to check.
 *
 * Return: 1 if all characters are digits, 0 otherwise.
 */
int _isdigit(char *str)
{
    while (*str)
    {
        if (*str < '0' || *str > '9')
            return 0;
        str++;
    }
    return 1;
}

/**
 * _multiply - Multiplies two numbers represented as strings.
 * @num1: First number.
 * @num2: Second number.
 * @result: Array to store the result.
 * @len1: Length of the first number.
 * @len2: Length of the second number.
 */
void _multiply(char *num1, char *num2, char *result, int len1, int len2)
{
    int i, j, carry = 0;

    /* Multiply each digit and add to the result */
    for (i = len1 - 1; i >= 0; i--)
    {
        carry = 0;
        for (j = len2 - 1; j >= 0; j--)
        {
            int prod = (num1[i] - '0') * (num2[j] - '0') + result[i + j + 1] + carry;
            result[i + j + 1] = prod % 10;
            carry = prod / 10;
        }
        result[i] += carry;
    }
}

/**
 * main - Entry point of the program.
 * @argc: Number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, 98 on failure.
 */
int main(int argc, char *argv[])
{
    char *num1, *num2, *result;
    int len1 = 0, len2 = 0, i;

    /* Validate number of arguments */
    if (argc != 3)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return 98;
    }

    num1 = argv[1];
    num2 = argv[2];

    /* Validate input */
    if (!_isdigit(num1) || !_isdigit(num2))
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return 98;
    }

    /* Calculate lengths of input numbers */
    while (num1[len1])
        len1++;
    while (num2[len2])
        len2++;

    /* Initialize result array with zeros */
    result = malloc((len1 + len2) * sizeof(char));
    if (result == NULL)
    {
        _putchar('E');
        _putchar('r');
        _putchar('r');
        _putchar('o');
        _putchar('r');
        _putchar('\n');
        return 98;
    }

    /* Multiply the numbers */
    _multiply(num1, num2, result, len1, len2);

    /* Print the result */
    i = 0;
    while (result[i] == 0 && result[i + 1] != '\0')
        i++;

    while (result[i])
    {
        _putchar(result[i] + '0');
        i++;
    }
    _putchar('\n');

    /* Free allocated memory */
    free(result);

    return 0;
}
