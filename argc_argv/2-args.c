#include <stdio.h>

/**
 * main - prints the number of arguments passed to the program
 * @argc: number of command-line arguments
 * @argv: array containing the command-line arguments
 *
 * Return: 0 (Success)
 */
int main(int argc, char *argv[])
{
	int i;

	i = 0;

	while (i < argc)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}

