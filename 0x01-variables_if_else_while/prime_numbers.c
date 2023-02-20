#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number;
	int flag = 0;
	int i;

	printf("Enter an Integer to check if is prime: ");
	scanf("%d", &number);

	for (i = 2; i <= number / 2; ++i)
	{
		if (number % i == 0)
		{
			flag = 1;
			break;
		}
	}

	if (number == 1)
		printf("1 is not a prime number.\n");

	else
	{
		if (flag == 0)
			printf("%d is a prime number.\n", number);
		else
			printf("%d is not a prime number.\n", number);
	}
	return (0);
}
