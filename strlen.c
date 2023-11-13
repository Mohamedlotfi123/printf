#include "main.h"
/**
 * _strlen - calculate length of the string
 * @c : pointer to the string
 *
 * Return: length of the string
 */
int _strlen(char *c)
{
	int count = 0;

	if (c == NULL || *c == '\0')
	{
		return (0);
	}
	while (c[count])
	{
		count += 1;
	}
	return (count);
}
