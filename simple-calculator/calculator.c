#include <stdio.h>



int main()
{ 
	int choice;
	int num1, num2;
	int result;

	while (1) {
		
		printf("Simple Calculator\n");
		printf("1. Add\n");
		printf("2. Subtract\n");
		printf("3. Multiply\n");
		printf("4. Divide\n");
		printf("0. Quit\n");
		printf("Pleas choose an option from the list: \n");
		
		scanf("%d", &choice);

		if (choice == 0)
		{
			printf("Goodbye!\n");
			break;
		}
		
		if (choice < 0 || choice > 4)
		{
			printf("Invalid! Please choose from the menu. \n");
			continue;
		}
		else
		{
			printf("You selected option %d. \n", choice);
		}

		printf("Please enter the numbers \n");
		printf("A: ");
		scanf("%d", &num1);

		printf("B: ");
		scanf("%d", &num2);

		switch (choice)
		{
			case 1:
				result = num1 + num2;
					printf("Result %d\n", result);
				break;
			case 2:
				result = num1 - num2;
					printf("Result %d\n", result);
				break;
			case 3:
				result = num1 * num2;
					printf("Result %d\n", result);
				break;
			case 4:
				if (num2 != 0)
				{
					result = num1 / num2;
					printf("Result %d\n", result);
				}
				else 
				{
					printf("Can't divide by zero! \n");
				}
				break;
		}
	}


	return (0);
}

