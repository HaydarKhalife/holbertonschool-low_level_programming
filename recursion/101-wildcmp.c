#include "holberton.h"

/**
 * wildcmp - Compares two strings with possible wildcard '*'
 * @s1: The first string
 * @s2: The second string (may contain wildcards '*')
 * Return: 1 if the strings are identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '*')
    {
        if (*(s2 + 1) == '*')
            return (wildcmp(s1, s2 + 1));
        if (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2))
            return (1);
    }
    if (*s1 == *s2)
    {
        if (*s1 == '\0')
            return (1);
        return (wildcmp(s1 + 1, s2 + 1));
    }
    return (0);
}
