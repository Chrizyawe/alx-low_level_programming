#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @b: represent the binary number
 *
 * Return: thr converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int c;
	unsigned int decimal_val = 0;

	if (!b)
		return (0);
	for (c = 0; b[c]; c++)
	{
		if (b[c] < '0' || b[c] > '1')
			return (0);
		decimal_val = 2 * decimal_val + (b[c] - '0');
	}

	return (decimal_val);
}
