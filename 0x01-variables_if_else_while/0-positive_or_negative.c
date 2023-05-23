#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - determine if number is poitivie negative or zero
 *
 * Return: Alway 0(success)
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if
	(n > 0i)
	{
		printf("%d is poitive\n", n);
	}
	else if
	(n == 0)
	{
		printf("%d is zero\n", n);
	}
	else
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
