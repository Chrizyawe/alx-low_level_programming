#include "main.h"

/**
 * print_binary - prints the binary representation of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int i, number = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			_putchar('1');
			number++;
		}
		else if (number)
			_putchar('0');
	}
	if (!number)
		_putchar('0');
}
