#include "main.h"

/**
 * _atoi - Converts a string to an integer
 * @s: The string to convert
 * Return: The integer value of the string
 */
int _atoi(char *s)
{
    int sign = 1;
    int result = 0;
    int i = 0;

    if (s[0] == '-')
    {
        sign = -1;
        i++;
    }

    while (s[i] != '\0')
    {
        result = result * 10 + (s[i] - '0');
        i++;
    }

    return sign * result;
}
