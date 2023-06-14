#include "main.h"

/**
 * _puts_recursion - function like puts();
 * puts_recursion - prints string
 * @s: input
 *
 * Return: Always success 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
	{
		_putchar('\n');
	}
}
