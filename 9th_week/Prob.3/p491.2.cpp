#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct cracker
{
	int price;
	int calories;
};

int main(void)
{	
	struct cracker basasack;
	basasack.price = 0;
	basasack.calories = 0;

	printf("�ٻ���� ���ݰ� ������ �Է��ϼ��� : ");
	scanf_s("%d %d", &(basasack.price), &(basasack.calories));
	printf("\n");
	printf("�ٻ���� ���� : %d��\n", (basasack.price));
	printf("�ٻ���� ���� : %dkcal\n", (basasack.calories));

	return 0;
}