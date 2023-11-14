#include "main.h"
/**
 * _printf - customize printf function
 * @format : formated string
 *
 * Return: Number of the printed characters
 */
int printf(const char *format, ...);
int _printf(const char *format, ...)
{
	int count = 0, len;
	long int n;
	char *s, x[25];
	va_list var_list;

	va_start(var_list, format);
	while (*format != '\0')
	{
		if (format == NULL)
		{
			break;
		}
		if (*format != '%')
		{
			write(1, format, 1);
			count += 1;
		}
		else
		{
			format++;
			if (*format == '\0')
			{
				break;
			}
			if (*format == 'c')
			{
				len = va_arg(var_list, int);
				count += 1;
				write(1, &len, 1);
			}
			if (*format == 's')
			{
				s = va_arg(var_list, char *);
				len = _strlen(s);
				count += len;
				write(1, s, len);
			}
			if (*format == '%')
			{
				count += 1;
				write(1, format, 1);
			}
			if (*format == 'd' || *format == 'i')
			{
				n = va_arg(var_list, int);
				s = my_itoa(n, x, 10);
				len = _strlen(s);
				count += len;
				write(1, x, len);
			}
			if (*format == 'b')
			{
				s = my_itoa(va_arg(var_list, unsigned int), x, 2);
				len = _strlen(s);
				count += len;
				write(1, s, len);
			}
			if (*format == 'u')
			{
				s = my_itoa(va_arg(var_list, unsigned int), x, 10);
				len = _strlen(s);
				count += len;
				write(1, s, len);
			}
			if (*format == 'o')
			{
				s = my_itoa(va_arg(var_list, unsigned int), x, 8);
				len = _strlen(s);
				count += len;
				write(1, s, len);
			}
			if (*format == 'x')
			{
				s = my_itoa(va_arg(var_list, unsigned int), x, 16);
				lower(s);
				len = _strlen(s);
				count += len;
				write(1, s, len);
			}
			if (*format == 'X')
			{
				s = my_itoa(va_arg(var_list, unsigned int), x, 16);
				len = _strlen(s);
				count += len;
				write(1, s, len);
			}
		}
		format++;
	}
	va_end(var_list);
	return (count);
}
