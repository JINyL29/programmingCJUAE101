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

	printf("바사삭의 가격과 열량을 입력하세요 : ");
	scanf_s("%d %d", &(basasack.price), &(basasack.calories));
	printf("\n");
	printf("바사삭의 가격 : %d원\n", (basasack.price));
	printf("바사삭의 열량 : %dkcal\n", (basasack.calories));

	return 0;
}