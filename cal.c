#include <stdio.h>
/**
 * main - function that performs arithmetic opertaions on two numbers
 * Return: always zero
 */
int main ()
{
	int firstNum, secondNum, output;
	char operator, abort;
	while ((abort != 'X') || (abort != 'x'))
	{
		printf("Enter the operation\n");
		scanf("%d %c %d", &firstNum, &operator, &secondNum);
		switch (operator)
		{
			case '+':
				output = firstNum + secondNum;
				break;
			case '-':
				output = firstNum - secondNum;
				break;
			case 'x':
				output = firstNum * secondNum;
				break;
			default:
				printf("add, subtract or multiply, please");
		}

		printf("%d", output);
		printf("\npress X to abort\n");
		scanf("%c", &abort);
		if ((abort == 'X') || (abort == 'x'))
                {
                        break;
              	}
	}

	return (0);
}
