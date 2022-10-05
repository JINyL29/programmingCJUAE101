#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i, j;
	i = 1;
	j = 1;

	for (i = 2; i <= 9; i++)
	{
		for (j = 1; j <= 9; j++)
		{
			printf("%d * %d\n", i, j, i * j);
		}
	}
	return 0;
}