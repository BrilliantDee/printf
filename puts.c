#include "main.h"

/**
 * _puts - prints a string with newline
 * @str: the string to print
 *
 * Return: number of characters printed (excluding newline).
 */
int _puts(const char *str)
{
	int count = 0;

	while (*str)
	{
		_putchar(*str);
		str++;
		count++;
	}

	_putchar('\n');
	count++; /* Count the newline character. */

	return (count);
}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: 1 on success, -1 on error (error is not set).
 */
int _putchar(int c)
{
	static int i;
	static char buf[OUTPUT_BUF_SIZE];

	if (c == BUF_FLUSH || i >= OUTPUT_BUF_SIZE)
	{
		write(1, buf, i);
		i = 0;
	}

	if (c != BUF_FLUSH)
		buf[i++] = c;

	return (1);
}
