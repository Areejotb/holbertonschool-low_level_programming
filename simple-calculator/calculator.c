#include <stdio.h>

/**
 * main - Entry point of the simple calculator
 *
 * Return: 0 on success, 1 on input error
 */
int main(void)
{
	int choice;

	printf("Simple Calculator\n");

	while (1)
	{
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		if (scanf("%d", &choice) != 1)
			return (1);

		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}

		printf("Not implemented yet\n");
	}

	return (0);
}
