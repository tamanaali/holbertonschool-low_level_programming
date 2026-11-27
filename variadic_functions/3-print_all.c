#include "variadic_functions.h"

/**
 * print_value - prints an argument according to its type
 * @type: type of argument
 * @args: list of arguments
 * @argument: tracks whether a value was printed
 */

void print_value(char type, va_list args, int *argument)
{
	char *str;

	switch (type)
	{
	case 'c':
		if (*argument)
			printf(", ");
		printf("%c", va_arg(args, int));
		*argument = 1;
		break;
	case 'i':
		if (*argument)
			printf(", ");
		printf("%d", va_arg(args, int));
		*argument = 1;
		break;
	case 'f':
		if (*argument)
			printf(", ");
		printf("%f", va_arg(args, double));
		*argument = 1;
		break;
	case 's':
		if (*argument)
			printf(", ");
		str = va_arg(args, char *);
		if (str == NULL)
			str = "(nil)";
		printf("%s", str);
		*argument = 1;
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
	int i, argument;

	va_start(args, format);
	i = 0;
	argument = 0;

	while (format && format[i] != '\0')
	{
		print_value(format[i], args, &argument);
		i++;
	}

	va_end(args);
	printf("\n");
}

