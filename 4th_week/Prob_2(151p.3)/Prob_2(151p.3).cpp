#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int nChestSize = 0;
	int AGE = 0 ;
	char chChestSize;

	printf("Input Your AGE and your ChestSize : ");
	scanf_s("%d%d", &AGE, &nChestSize);

	if (AGE < 20)
	{
		if (nChestSize < 85)
		{
			chChestSize = 'S';
		}
		else if ((nChestSize >= 85) && (nChestSize < 95))
		{
			chChestSize = 'M';
		}
		else
		{
			chChestSize = 'L';
		}
	}
	else (AGE >= 20);
	{
		if (nChestSize < 90)
		{
			chChestSize = 'S';
		}
		else if ((nChestSize >= 90) && (nChestSize < 100))
		{
			chChestSize = 'M';
		}
		else
		{
			chChestSize = 'L';
		}
	}
	printf("Your Size is : %c\n", chChestSize);

	return 0;
}