#include "3-calc.h"

/**
 * main - perform the calculation
 * @argc: array of command-line arguments
 * @argv: number of command-line arguments
 *
 * Return: 0 on success & error otherwise
 */

int main(int argc, char *argv[])
{
	int num1, num2;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	op_func = get_op_func(argv[2]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || argv[2][0] == '%') && num2 == 0)
	{
		printf("Error\n");
		return (100);
	}

	printf("%d\n", op_func(num1, num2));

	return (0);

}
