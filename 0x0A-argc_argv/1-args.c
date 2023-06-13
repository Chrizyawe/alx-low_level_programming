#include <stdio.h>
#include "main.h"
/**
 * main - print numbers of the arguement
 * @argc: count numbers of argument
 * @argv: arrays of argument
 *
 * Return: Always 0 (success)
 */
int main(int argc, char *argv[])
{
	(void)argv;/* ignore argv */

	printf("%d\n", argc -1);

	return (0);
}
