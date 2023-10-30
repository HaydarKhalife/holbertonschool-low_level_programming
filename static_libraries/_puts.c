#include "main.h"
#include <unistd.h>

/**
 * _puts - Writes a string to the standard output
 * @s: The string to write
 */
void _puts(char *s)
{
    int i = 0;

    while (s[i] != '\0')
    {
        write(1, &s[i], 1);
        i++;
    }
}
