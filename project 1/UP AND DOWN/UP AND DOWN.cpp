#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define MINIMUM		    0
#define MAXIMUM		   100
#define CHANCE_ONE		7
#define CHANCE_TWO		3
#define HINT_ONE		3
#define HINT_TWO		1
#define COUNT_TO_ADD    1
#define LAST	        1

void Up_and_Down(int Chance)
/* �ݺ����� Ȱ���� ����ڰ� �Է��ϴ� ���ڸ� ��ǻ�Ͱ� ���Ƿ� ������ ���ڿ� ����
UP �Ǵ� DOWN�� ����ϰ� ����ڰ� �Է��ϴ� Ƚ���� ī��Ʈ�ϸ� ���߸� �¸� Ʋ���� �й踦 ����ϴ� ���α׷�*/
{
	int C_Num = 0;	// ��ǻ�Ͱ� �������� ���� ������ �����ϱ� ���� ���� ���� �� �ʱ�ȭ
	int MY_Num = 0;	// ������� �Է¼��ڸ� �����ϱ� ���� ���� ���� ���ʱ�ȭ
	int Count = 0;	// �Է�Ƚ�� Ȯ���� ���� ���� ���� �� �ʱ�ȭ
	int Hint_Num = 0;	// ����ڿ��� ������Ʈ�� �ִ� ���� ���� �� �ʱ�ȭ

	C_Num = rand() % MAXIMUM;	//0~100������ ������ ���� �� �ϳ��� C_Num�� ���� 
	
	while (1)	// while ���� if���� Ȱ�� ���ϴ� �Լ��� ����
	{	
        printf("(%d) : Enter The Number !  (The Range is 0 ~ 100) : ", Count + COUNT_TO_ADD);    // Ƚ���� ����ϱ����� 0���Ͱ� �ƴ� 1�� ���� 1���� Ƚ���� ���
		scanf_s("%d", &MY_Num);
		printf("\n");

        Count++;	// ����ڰ� �Է��ϴ� Ƚ�� ����

		if ((MY_Num < MINIMUM) || (MY_Num > MAXIMUM))	// ������ ��� ���ڸ� ����ڰ� �Է½�
		{
			printf("\tThe Number Is Out Of Range!\n\n");
			printf("\t< You are Lose~!! >\n\n\t< Retry! >\n");
			break;
		}
		if (C_Num > MY_Num)	// ��ǻ�Ͱ� ������ ���� ũ�Ⱑ ���� �Է��� ���� ũ�⺸�� ū ���

		{
			printf("\tUP!\n\n");
		}
		else if (C_Num < MY_Num)	// ��ǻ�Ͱ� ������ ���� ũ�Ⱑ ���� �Է��� ���� ũ�⺸�� ���� ���
		{
			printf("\tDOWN!\n\n");
		}
		else if (C_Num == MY_Num) // ��ǻ�Ͱ� ������ ���� ũ�Ⱑ ���� �Է��� ���� ũ��� ���� ���
		{
			printf("\t< WOW!!! You win!! Congratulation!! >\n\n\n");
			break;  //��������
		}

		
		if (Count + LAST == Chance)	// �������� ��Ʈ�� �˷��ֱ� ���� if��
		{
			Hint_Num = (rand() % HINT_ONE) + HINT_TWO;	// ������ ���� �� �ϳ��� Hint_Num�� ����(������ 1~4)
			printf("\t< Last Chance! >\n\n");
			printf("\tThe number is around %d!!\n\n", C_Num + Hint_Num);
			printf("\t< But I think you'll lose HAHAHAHA >\n\n");
		}
		if (Count == Chance) 	// ������ Ƚ���� ���� �Է��� Ƚ���� ��������
		{
			printf("\tHAHAHA  You've exceeded the limit.\n\n\t< You are Lose~!! >\n\n");
			printf("\tThe number is %d...\n\n\t If You Want To Retry, Exit And Trun Back Again~!!\n\n", C_Num);
			continue; // ��������
		}
	}
}

int main(void)
{
	int Chance = 0;	// Ƚ���� �����ϱ� ���� ���� �ʱ�ȭ

	srand(time(NULL));	//������ ������ ������ �� �ֵ��� �ʱ�ȭ

	Chance = (rand() % CHANCE_ONE) + CHANCE_TWO;	// 3~10������ ������ ������ chance�� ����

	printf("\n");
	printf("\t< The Up and Down Game is Start!! > \n\n");
    printf("\tGuess The Number before %d times ^^\n\n", Chance);
    Up_and_Down(Chance);	//Up_and_Down ���� �Լ� ȣ��

	return 0;
}