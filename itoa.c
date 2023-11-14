#include "main.h"
/**
 * my_itoa - convert integer to string
 * @n :number to be coverted
 * @str : string to save the integer in
 * @b : base of coversion
 *
 * Return: pointer to str
 */
char *my_itoa(int n, char *str, int b)
{
	int i = 0, x = 0, y, digit;
	char tmp;

	if (b < 2 || b > 36)
	{
		return (NULL);
	}
	if (n < 0)
	{
		n = -1 * n;
		str[i] = '-';
		i++;
	}
	do {
		digit = n % b;
		if (digit < 10)
		{
			str[i] = digit + 48;
		}
		else
		{
			str[i] = 65 + digit - 10;
		}
		i++;
	} while ((n /= b) > 0);
	str[i] = '\0';
	if (str[0] == '-')
	{
		x = 1;
	}
	for (y = i - 1; x < y; x++, y--)
	{
		tmp = str[x];
		str[x] = str[y];
		str[y] = tmp;
	}
	return (str);
}
