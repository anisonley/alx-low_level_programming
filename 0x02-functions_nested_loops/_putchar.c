#include "main.h"
#include <unistd.h>
/**
 * _putchar = wriets the character c to stdout
 * @c: The character to print
 *
 * Return: on success 1.
 * On error, -1 is returned, and erro is set appropriatelt.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
