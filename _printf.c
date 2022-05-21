#include "main.h"
#include <stdarg.h>
#include <stdlib.h>
/**
  * _printf - printf function
  * @format: list of argument types passed to the function
  *
  * Return: number of characters printed
  */
int _printf(const char *format, ...)
{
	va_list parameter;
	int gen_counter;
	int str_counter;
	int num_character;
	char *str;

	num_character = 0;
	va_start(parameter, format);
	for (gen_counter = 0; format[gen_counter] != '\0'; gen_counter++)
	{
		if (format[gen_counter] != '%')
		{
			_putchar(format[gen_counter]);
			num_character++;
		}
		else if (format[gen_counter] == '%')
		{
			if (format[gen_counter + 1] == 'c')
			{
				_putchar(va_arg(parameter, int));
				gen_counter++;
				num_character++;
			}
			else if (format[gen_counter + 1] == 's')
			{
				str = va_arg(parameter, char*);
				for (str_counter = 0; str[str_counter] != '\0'; str_counter++)
				{
					_putchar(str[str_counter]);
					num_character++;
				}
				gen_counter++;
			}
			else if (format[gen_counter + 1] == '%')
			{
				_putchar('%');
				gen_counter++;
				num_character++;
			}
		}
	}
	va_end(parameter);
	return (num_character);
}
