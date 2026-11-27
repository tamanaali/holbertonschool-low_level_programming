#include "variadic_functions.h"


#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_value - prints an argument according to its type
 * @type: type of argument
 * @args: list of arguments
 * @printed: tracks whether a value was printed
 */
void print_value(char type, va_list args, int *printed)
{
	char *str;

	switch (type)
	{
	case 'c':
	case 'i':
	case 'f':
	case 's':
		if (*printed)
			printf(", ");
		*printed = 1;
		break;
	}

	switch (type)
	{
	case 'c':
		printf("%c", va_arg(args, int));
		break;
	case 'i':
		printf("%d", va_arg(args, int));
		break;
	case 'f':
		printf("%f", va_arg(args, double));
		break;
	case 's':
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		break;
	}
}

/**
 * print_all - prints all types of arguments
 * @format: list of types of arguments
 */
void print_all(const char * const format, ...)
{
	va_list args;
	int i, printed;

	va_start(args, format);
	i = 0;
	printed = 0;

	while (format && format[i] != '\0')
	{
		print_value(format[i], args, &printed);
		i++;
	}

	va_end(args);
	printf("\n");
}

