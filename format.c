#include "main.h"
#include <stdio.h>
/**
  * int character - holds printed character
  * int string_character - holds printed string
  * int per_cent - holds printed %
  */
int character(va_list parameter)
{
	int x = va_arg(parameter, int);
	_putchar(x);
	return (1);
}
int string_character(va_list parameter)
{
	int str_counter;
	char *str = va_arg(parameter, char*);
	for (str_counter = 0; str[str_counter] != '\0'; str_counter++)
	{
		_putchar(str[str_counter]);
	}
	return (str_counter);
}
int per_cent()
{
	_putchar('%');
	return (1);
}
