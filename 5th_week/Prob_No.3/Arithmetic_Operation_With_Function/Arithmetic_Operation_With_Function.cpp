#include <stdio.h>
#include <stdlib.h>

int Sum(int a, int b)
{
	int temp;
	temp = a + b;
	return temp;
}

int Sub(int a, int b)
{
	int temp;
	temp = a - b;
	return temp;
}

int Mul(int a, int b)
{
	int temp;
	temp = a * b;
	return temp;
}

int Div(int a, int b)
{
	int temp;
	temp = a / b;
	if (b == 0)
	{
		printf("Don't divide 0.");
	}
    return temp;
}

int main(void)
{
	int a, b;

	printf("Input 2 Integers For Arithmetic Operation : ");
	scanf_s("%d %d", &a, &b);

	printf("Sum: %d + %d = %d\n", a, b, Sum(a, b));
	printf("Sub: %d - %d = %d\n", a, b, Sub(a, b));
	printf("Mul: %d * %d = %d\n", a, b, Mul(a, b));
	printf("Div: %d / %d = %d\n", a, b, Div(a, b));



	return 0;
}