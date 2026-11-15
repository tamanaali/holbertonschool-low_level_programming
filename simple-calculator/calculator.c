#include <stdio.h>



int main()
{ 
	int choice;

	while (1) {
		
		printf("Simple Calculator\n");
		printf("1. Add\n");
		printf("2. Subtract\n");
		printf("3. Multiply\n");
		printf("4. Divide\n");
		printf("0. Quit\n");
		printf("Pleas choose an option from the list: \n");
		
		if (scanf("%d", &choice) != 1)
		{
			printf("Input must be an integer!\n");

			while (getchar() != '\n')
			{
			}

			continue;
		}

		if (choice == 0)
		{
			printf("Goodbye!\n");
			break;
		}
		
		if (choice < 0 || choice > 4)
		{
			printf("Invalid! Please choose from the menu. \n");
		}
		else
		{
			printf("You selected option %d. \n", choice);
		}
	}

	return (0);
}

