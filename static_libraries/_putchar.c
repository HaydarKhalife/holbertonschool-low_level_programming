#include <unistd.h>
#include "main.h"

/**
 * _putchar - Writes a character to the standard output
 * @c: The character to write
 * Return: On success, 1 is returned. On error, -1 is returned.
 */
int _putchar(char c)
{
    return write(1, &c, 1);
}
