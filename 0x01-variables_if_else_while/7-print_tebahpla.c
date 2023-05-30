#include <stdio.h>
/**
 * main - alphabet in reverse
 *
 * Return: Always (success) 0
 *
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
