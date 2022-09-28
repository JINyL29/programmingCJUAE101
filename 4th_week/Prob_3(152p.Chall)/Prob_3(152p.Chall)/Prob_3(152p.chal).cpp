#include <stdio.h>
#include <stdlib.h>

   // 152p.Chal_Arithmetic Operation.

int main(void)
{
	int nA, nB;
	nA = 0; nB = 0;
	char chOper;


	printf("Input your arithmetic operation : \n");
	scanf_s("%d %c %d", &nA, &chOper, 1, &nB);

	switch (chOper)
	{
	case '+':
	{
		printf("This Arithmetic operation is Addition.\n");
		int nRes = nA + nB;
		printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
		break;
	}
	case '-':
	{
		printf("This Arithmetic operation is Subtraction.\n");
		int nRes = nA - nB;
		printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
		break;
	}
	case '*':
	{
		printf("This Arithmetic operation is Multiplication.\n");
		int nRes = nA * nB;
		printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
		break;
	}
	case '/':
	{
		printf("This Arithmetic operation is Division.\n");
		int nRes = nA / nB;
		printf("%d %c %d = %d\n", nA, chOper, nB, nRes);
		break;
	}
	default:
	{
		printf("This is wrong Arithmetic operation.\n Please Check your's.");
		break;
	}
    }

	return 0;
}