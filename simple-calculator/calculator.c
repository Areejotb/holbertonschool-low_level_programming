#include <stdio.h>

/**
 * main - Entry point of the simple calculator
 *
 * Return: Always 0
 */
int main(void)
{
	int choice, c, res;

	printf("Simple Calculator\n");

	while (1)
	{
		printf("1) Add\n");
		printf("2) Subtract\n");
		printf("3) Multiply\n");
		printf("4) Divide\n");
		printf("0) Quit\n");
		printf("Choice: ");

		res = scanf("%d", &choice);

		if (res == EOF)
			break;

		if (res == 0)
		{
			while ((c = getchar()) != '\n' && c != EOF)
				;
			printf("Invalid choice\n");
			continue;
		}

		if (choice == 0)
		{
			printf("Bye!\n");
			break;
		}

		if (choice < 1 || choice > 4)
			printf("Invalid choice\n");
	}

	return (0);
}
