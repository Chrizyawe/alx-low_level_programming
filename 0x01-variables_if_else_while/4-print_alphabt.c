#include <stdio.h>

/**
 * main - print all alphabet except q and e
 *
 * Return: Always (success) 0
 *
 */

int main()
{
	char lowercase = 'a';

	while (lowercase <= 'z')
	{
		if (lowercase != 'q' && lowercase != 'e')
		{
			putchar(lowercase);
		}
		lowercase++;
	}
		putchar('\n');
		return 0;
}
