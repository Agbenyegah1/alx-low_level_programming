#include "main.h"

/**
 * string_nconcat - Concatenates two strings up to n bytes.
 * @s1: First string.
 * @s2: Second string.
 * @n: Maximum number of bytes from s2 to concatenate.
 *
 * Return: A pointer to the concatenated string.
 *         If the function fails, it should return NULL.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    char *concatenated;
    unsigned int len_s1, len_s2, i, j;

    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    for (len_s1 = 0; s1[len_s1] != '\0'; len_s1++)
        ;

    for (len_s2 = 0; s2[len_s2] != '\0'; len_s2++)
        ;

    if (n >= len_s2)
        n = len_s2;

    concatenated = malloc(sizeof(char) * (len_s1 + n + 1));

    if (concatenated == NULL)
        return NULL;

    for (i = 0; i < len_s1; i++)
        concatenated[i] = s1[i];

    for (j = 0; j < n; j++)
        concatenated[i + j] = s2[j];

    concatenated[i + j] = '\0';

    return concatenated;
}
