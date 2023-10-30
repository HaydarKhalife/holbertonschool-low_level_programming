#include "main.h"

/**
 * _strncat - Concatenates two strings with a limit
 * @dest: The destination string
 * @src: The source string to be appended
 * @n: The maximum number of characters to append from src
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
    int dest_len = _strlen(dest);
    int i;

    for (i = 0; i < n && src[i] != '\0'; i++)
    {
        dest[dest_len + i] = src[i];
    }

    dest[dest_len + i] = '\0';

    return dest;
}
