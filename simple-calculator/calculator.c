#include <stdio.h>

int calcul(int a, int b, int op)
{
	if (op == 1)
		return (a + b);
	return (0);	
}

int main(void)
{
	int choice, a, b;

	printf("Simple Calculator\n");
	printf("1) Add\n");
	printf("2) Subtract\n");
	printf("3) Multiply\n");
	printf("4) Divide\n");
	printf("0) Quit\n");

	while (1)
	{
		printf("Choice: ");
		scanf("%d", &choice);

		if (choice == 0)
		{
		     printf("Bye!\n");
		     return(0);
		}
		else if (choice < 0 || choice > 4)
		{
		     printf("Invalid choice\n");
		}
		else
		{
			printf("A: ");
			scanf("%d", &a);
			printf("B: ");
			scanf("%d", &b);
			printf("Result: %d\n", calcul(a, b, choice));	
		}
	}
}

}
