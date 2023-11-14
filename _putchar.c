#include "main.h"
/**
 * _putchar - print string
 * c : pointer to the string
 *
 * Return: integer
 */
int _putchar(char *c)
{
	return (write(1, c, _strlen(c)));
}
