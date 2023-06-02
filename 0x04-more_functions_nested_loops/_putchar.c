#include "main.h"
#include <unistd.h>
/**
 * -putchar - writes the character c to stdout
 *  @c: char to print
 *
 *  Return: on success 1
 *  on error, -1 is returned 
 */
int _putchar(char c)
{
	return write(1, &c, 1);
}
