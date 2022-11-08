#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define	MAXIMUM_NUMBER	100	
#define NUMBER_SIZE	100        //숫자의 크기

void Random_number(int* nNum, int nSize)	//무작위 정수 생성, 출력 함수 선언
{
	srand((unsigned)time(NULL));	//정해진 난수가 아닌 무작위의 수를 가져오는 수식

	printf("\nThe numbers : \n");
	int i = 0;	//임시변수i 선언
	for (int i = 0; i < nSize; i++)	//nSize만큼 반복
	{
		nNum[i] = rand() % NUMBER_SIZE;	//nSize만큼 칸마다 100까지의 무작위 정수로 채우기
		printf("%d ", nNum[i]);	//채워진 숫자 출력
	}
	printf("\n");
}

int Average(int* nNum, int nSize)	//평균 계산 함수 선언
{
	int i;
	int temp = 0;	//임시변수 temp 지정, 초기화
	int sum = 0;
	for (i = 0; i < nSize; i++)	//nSize만큼 반복
	{
		sum += nNum[i];	//배열 안의 값을 더함
	}
	temp = sum / nSize;	//평균 구하는 공식
	return temp;	//temp값을 반환
}

int Variation(int* nNum, int nSize)	//분산 계산 함수 선언
{
	int i = 0;	//임시변수 지정, 초기화
	int temp = 0;
	int avg = Average(nNum, nSize);	//계산한 평균값 avg에 저장
	for (int i = 0; i < nSize; i++)	//nSize만큼 반복
	{
		temp = temp + pow((nNum[i] - avg), 2);	//분산 계산
	}
	temp = temp / nSize; 
	return temp;	       //temp값으로 반환
}

int Std_deviation(int* nNum, int nSize)	         //표준 편차 계산 함수 선언
{
	int temp = 0;	                             //임시변수 지정 및 초기화 
	temp = sqrt(Variation(nNum, nSize));	 //표준 편차 계산
	return temp;	       //temp값으로 반환
}

void Calculation(int* nNum, int nSize)	//계산 및 출력하는 함수 선언
{
	int nAns, nRes;         // nAns,nRes 선언
	while (1)	            // 계산 과정을 while 반복문을 사용함으로써 case 별로 나눔
	{
		printf("\nWhat do you want to see? Input the number:\nEx)Exit: 0, Average: 1, Variance: 2, Standard deviation: 3\n");
		scanf_s("%d", &nAns);	//nAns에 입력 값 저장

		switch (nAns)
		{
		case 0:	
			printf("\nExit..\n");
			exit(1);	
			break;	

		case 1:	
			printf("\nAverage: ");
			nRes = Average(nNum, nSize);	//nRes에 평균값 계산한 값 저장
			printf("%d\n", nRes);	        //값 출력
			break;	

		case 2:	
			printf("\nVariance: ");
			nRes = Variation(nNum, nSize);	//nRes에 분산 계산한 값 저장
			printf("%d\n", nRes);	        //값 출력
			break;	

		case 3:	
			printf("\nStandard deviation: ");
			nRes = Std_deviation(nNum, nSize);	//nRes에 표준 편차 계산한 값 저장
			printf("%d\n", nRes);	            //값 출력
			break;	

		default:	
			printf("\nPlease write the number again(0 ~ 3)\n");	//다시 입력하기 출력
			break;	
		}
	}
}

int main(void)
{
	int nNum[MAXIMUM_NUMBER];	//일정 크기의 배열 선언
	int nSize;	                //변수 지정

	printf("Enter an array of a certain size for calculating the mean, variance, and standard deviation:\n");
	scanf_s("%d", &nSize);	//입력 값을 nSize에 저장

	if (100 > nSize > 0)	
	{
		Random_number(nNum, nSize);	//무작위 정수 생성
		Calculation(nNum, nSize);	//평균, 분산, 표준편차 계산
	}
	else	
	{
		printf("Please enter the positive number.(Area: 0 ~ 100)\n");	
	}
	return 0;	
}