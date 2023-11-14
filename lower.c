#include "main.h"
/**
 * lower - convert from upper to lower
 * @str : pointer to string
 *
 * Return: Void
 */
void lower(char *str)
{
	int i = 0;

	while (str[i])
	{
		if (str[i] > 65 && str[i] < 90)
		{
			str[i] = str[i] + 32;
		}
		i++;
	}
}
