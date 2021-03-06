#include "holberton.h"

/**
  *_printc - print a character
  *@c: is a va_list that will receive a char
  *@s: pointer to the 1024 bytes buffer
  *Return: 0 it is ok, 1 it is fail
 */

int _printc(va_list c, char *s)
{
	char string;

	string = (char)va_arg(c, int);
	*s = string;
	return (1);
}

/**
 *_prints - print a string
 *@s: is a string in a va_list
 *@str: pointer to the 1024 bytes buffer
 *Return: 0 it is ok, 1 it is fail
 */

int _prints(va_list s, char *str)
{
	unsigned int length = 0;
	char null[] = "(null)";
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
	{
		_strcpy(str, null);
		return (6);
	}
	length = _strlen(string);
	_strcpy(str, string);
	return (length);
}

/**
 *_printpc - prints another percentage
 *@c: va_list unused
 *@s: pointer to the 1024 bytes buffer
 *Return: number of elements
 */

int _printpc(va_list c, char *s)
{
	(void) c;
	*s = '%';
	return (1);
}

/**
 *_printS - print a string
 *@s: is a string in a va_list
 *@str: pointer to the 1024 bytes buffer
 *Return: 0 it is ok, 1 it is fail
 */

int _printS(va_list s, char *str)
{
	unsigned int length = 0;
	char null[] = "(null)";
	char *string;

	string = va_arg(s, char *);
	if (string == NULL)
	{
		_strcpy(str, null);
		return (6);
	}
	length = _strlenE(string);
	_strcpyE(str, string);
	return (length);
}

/**
 *_printr - prints a string, in reverse.
 *@valist: va_list to the string that will be printed.
 *@s: pointer to the allocated memory.
 *Return: the length of the string
 */

int _printr(va_list valist, char *s)
{
	char *str = va_arg(valist, char *);
	int i = 0;
	int j;

	while (*(str + i) != '\0')
		i++;
	for (j = (i - 1); j >= 0; j--)
		*(s + (i - (j + 1))) = *(str + j);
	return (i);
}
