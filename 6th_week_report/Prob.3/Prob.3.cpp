#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define n 3	// 3 by 3 행렬을 만들기 위해 n을 3으로 설정
#define m 3	// 3 by 3 행렬을 만들기 위해 m을 3으로 설정
#define RAND_SIZE 10	//무작위 난수의 범위 설정

void print_arg(int a[n][m]) // 배열을 출력하는 print_arg 함수
{

	for (int i = 0; i < n; i++) // 반복문을 사용한 2차원 배열의 출력
	{
		for (int j = 0; j < m; j++)
		{
			printf("%d ", a[i][j]);
		}
		printf("\n");
	}

	printf("\n");
}

int main(void)
{
	int arg1[n][m] = { 0 };	// 첫 번째 2차원 행렬이 담길 2차원 배열 arg1을 선언하고 0으로 초기화
	int arg2[m][n] = { 0 };	// 두 번째 2차원 행렬이 담길 2차원 배열 arg2을 선언하고 0으로 초기화
	int total[n][n] = { 0 };	// 두 행렬의 곱이 담길 2차원 배열 total을 선언하고 0으로 초기화

	srand((unsigned)time(NULL));	//시간별로 무작위 난수가 생성됨

	for (int i = 0; i < n; i++)	// [m][n] 반복문 선언
	{
		for (int j = 0; j < m; j++) // [m][n] 반복문 선언
		{
			arg1[i][j] = rand() % RAND_SIZE;	// arg1 무작위 난수 생성
			arg2[j][i] = rand() % RAND_SIZE;	// arg2무작위 난수 생성
		}

	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < m; k++) // // 행렬의 곱 공식 반복문 선언
			{
				total
				[i][j] += arg1[i][k] * arg2[k][j];
			}
		}
	}

	printf("arg1[%d][%d] \n", n, m);
	print_arg(arg1); // 배열 출력을 위해 print_arg 함수 호출

	printf("arg2[%d][%d] \n", m, n);
	print_arg(arg2);

	printf("total[%d][%d] \n", m, n);
	print_arg(total);

	return 0;
}