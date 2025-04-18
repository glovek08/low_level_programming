#include "main.h"
#include <stdio.h>
/**
 * _puts_recursion - prints a string.
 * @str: the string to be printed.
 * Return: void.
 */
void _puts_recursion(char *str)
{
	if (!*str)
	{
		_putchar('\n');
		return;
	}
	_putchar(*str);
	_puts_recursion(++str);
}
