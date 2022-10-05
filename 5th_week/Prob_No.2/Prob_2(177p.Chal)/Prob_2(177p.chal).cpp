#include<stdio.h>
#include<stdlib.h>

// 177p.Chal_Prime Number

int main(void)
{
	int i;                                                   
	printf("Input Your Integer that more than 2 : ");
	scanf_s("%d", &i);

	int j, k;
	int cnt = 0;                                            // For Count Five Times In Each Line.

	for (j = 2; j <= i; j++)
	{
		for (k = 2; k <= j; k++)
		{
			if (j % k == 0)
			{
				if (j > k)break;                            

				else
				{
					printf("%5d", j);
					cnt++;
						if (cnt % 5 == 0)
							printf("\n");
				}
			}
		}
	}

	if (i <= 1)
	{
		printf("Please Check The Problem.");
	}
	return 0;
}