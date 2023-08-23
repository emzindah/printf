#include "main.h"
/**
 * _printf - function that produces output according to a format.
 * @format: character string
 *
 * Return: the number of bytes
 */
int _printf(const char *format, ...)
{
	size_t a, sc, b = 0;

	va_list emt;

	va_start(emt, format);

	for (a = 0; format[a] != '\0'; a++)
	{
		if (format[a] == '%' && format[a + 1] == 'c')
		{
			ptchr(va_arg(emt, int));
			a++;
		}
		else if (format[a] != '%')
		{
			ptchr(format[a]);
		}
		else if (format[a + 1] == 's')
		{
			sc = pstr(va_arg(emt, char *));
				a++;
			b = b + (sc - 1);
		}
		else if (format[a + 1] == '%')
		{
			ptchr('%');
		}
		b++;
	}
	va_end(emt);
	return (b);

}
