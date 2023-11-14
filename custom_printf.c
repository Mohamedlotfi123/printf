#include "main.h"
/**
 * _printf - customize printf function
 * @format : formated string
 *
 * Return: Number of the printed characters
 */
int _printf(const char *format, ...)
{
	int count = 0, len;
	char c, *s;
	va_list var_list;

	va_start(var_list, format);
	while (*format != '\0')
	{
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
				c = va_arg(var_list, int);
				count += 1;
				write(1, &c, 1);
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
		}
		count += len;
		format++;
	}
	va_end(var_list);
	return (count);
}
