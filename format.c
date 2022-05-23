#include "main.h"
#include <stdio.h>

/**
  * character - Function prints character when %c is used
  * @parameter: variable that holds a va_list of arguments
  * Return: returns a character value
  */

int character(va_list parameter)
{
	int x;

	x = va_arg(parameter, int);
	_putchar(x);
	return (1);
}

/**
  * string_character - Function prints string when %s is used
  * @parameter: variable that holds a va_list of arguments
  * Return: returns a character value
  */

int string_character(va_list parameter)
{
	int str_counter;
	char *str;

	str = va_arg(parameter, char*);

	for (str_counter = 0; str[str_counter] != '\0'; str_counter++)
	{
		_putchar(str[str_counter]);
	}
	return (str_counter);
}
/**
 *print_digit - prints integers according to respective integer
 *specifier format
 *@parameter: variable that holds the value of va_list argument
 *Return: length of integers printed
 */
int print_digit(va_list parameter)
{
	int n;
	int div;
	int len;
	unsigned int num;

	n = va_arg(parameter, int);
	div = 1;
	len = 0;

	if (n < 0)
	{
		len += _putchar('-');
		num = n * -1;
	}
	else
		num = n;

	for (; num / div > 9; )
		div *= 10;

	for (; div != 0; )
	{
		len += _putchar('0' + num / div);
		num %= div;
		div /= 10;
	}

	return (len);
}
