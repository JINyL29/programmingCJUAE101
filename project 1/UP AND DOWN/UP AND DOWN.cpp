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
/* 반복문을 활용해 사용자가 입력하는 숫자를 컴퓨터가 임의로 지정한 숫자와 비교해
UP 또는 DOWN을 출력하고 사용자가 입력하는 횟수를 카운트하며 맞추면 승리 틀리면 패배를 출력하는 프로그램*/
{
	int C_Num = 0;	// 컴퓨터가 무작위로 뽑은 난수를 저장하기 위한 변수 설정 및 초기화
	int MY_Num = 0;	// 사용자의 입력숫자를 저장하기 위한 변수 설정 및초기화
	int Count = 0;	// 입력횟수 확인을 위한 변수 설정 및 초기화
	int Hint_Num = 0;	// 사용자에게 범위힌트를 주는 변수 설정 및 초기화

	C_Num = rand() % MAXIMUM;	//0~100까지의 무작위 난수 중 하나를 C_Num에 저장 
	
	while (1)	// while 문과 if문을 활용 비교하는 함수를 설정
	{	
        printf("(%d) : Enter The Number !  (The Range is 0 ~ 100) : ", Count + COUNT_TO_ADD);    // 횟수를 출력하기위해 0부터가 아닌 1을 더해 1부터 횟수를 출력
		scanf_s("%d", &MY_Num);
		printf("\n");

        Count++;	// 사용자가 입력하는 횟수 증가

		if ((MY_Num < MINIMUM) || (MY_Num > MAXIMUM))	// 범위를 벗어난 숫자를 사용자가 입력시
		{
			printf("\tThe Number Is Out Of Range!\n\n");
			printf("\t< You are Lose~!! >\n\n\t< Retry! >\n");
			break;
		}
		if (C_Num > MY_Num)	// 컴퓨터가 저장한 정수 크기가 내가 입력한 정수 크기보다 큰 경우

		{
			printf("\tUP!\n\n");
		}
		else if (C_Num < MY_Num)	// 컴퓨터가 저장한 정수 크기가 내가 입력한 정수 크기보다 작은 경우
		{
			printf("\tDOWN!\n\n");
		}
		else if (C_Num == MY_Num) // 컴퓨터가 저장한 정수 크기가 내가 입력한 정수 크기와 같은 경우
		{
			printf("\t< WOW!!! You win!! Congratulation!! >\n\n\n");
			break;  //게임종료
		}

		
		if (Count + LAST == Chance)	// 마지막에 힌트를 알려주기 위한 if문
		{
			Hint_Num = (rand() % HINT_ONE) + HINT_TWO;	// 무작위 난수 중 하나를 Hint_Num에 저장(범위는 1~4)
			printf("\t< Last Chance! >\n\n");
			printf("\tThe number is around %d!!\n\n", C_Num + Hint_Num);
			printf("\t< But I think you'll lose HAHAHAHA >\n\n");
		}
		if (Count == Chance) 	// 정해진 횟수와 내가 입력한 횟수가 같아지면
		{
			printf("\tHAHAHA  You've exceeded the limit.\n\n\t< You are Lose~!! >\n\n");
			printf("\tThe number is %d...\n\n\t If You Want To Retry, Exit And Trun Back Again~!!\n\n", C_Num);
			continue; // 게임종료
		}
	}
}

int main(void)
{
	int Chance = 0;	// 횟수를 저장하기 위한 변수 초기화

	srand(time(NULL));	//무작위 난수가 생성될 수 있도록 초기화

	Chance = (rand() % CHANCE_ONE) + CHANCE_TWO;	// 3~10까지의 무작위 난수를 chance에 저장

	printf("\n");
	printf("\t< The Up and Down Game is Start!! > \n\n");
    printf("\tGuess The Number before %d times ^^\n\n", Chance);
    Up_and_Down(Chance);	//Up_and_Down 게임 함수 호출

	return 0;
}