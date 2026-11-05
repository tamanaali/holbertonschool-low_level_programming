
#include <stdio.h>

/**
 * main - Prints the lowercase and uppercase alphabet
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char letter = 'a';
	char Uletter = 'A';

	while (letter <= 'z')
	{
		putchar(letter);
		letter++;
	}

	while (Uletter <= 'Z')
	{
		putchar(Uletter);
		Uletter++;
	}

	putchar('\n');

	return (0);
}

