#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define n 3	// 3 by 3 ����� ����� ���� n�� 3���� ����
#define m 3	// 3 by 3 ����� ����� ���� m�� 3���� ����
#define RAND_SIZE 10	//������ ������ ���� ����

void print_arg(int a[n][m]) // �迭�� ����ϴ� print_arg �Լ�
{

	for (int i = 0; i < n; i++) // �ݺ����� ����� 2���� �迭�� ���
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
	int arg1[n][m] = { 0 };	// ù ��° 2���� ����� ��� 2���� �迭 arg1�� �����ϰ� 0���� �ʱ�ȭ
	int arg2[m][n] = { 0 };	// �� ��° 2���� ����� ��� 2���� �迭 arg2�� �����ϰ� 0���� �ʱ�ȭ
	int total[n][n] = { 0 };	// �� ����� ���� ��� 2���� �迭 total�� �����ϰ� 0���� �ʱ�ȭ

	srand((unsigned)time(NULL));	//�ð����� ������ ������ ������

	for (int i = 0; i < n; i++)	// [m][n] �ݺ��� ����
	{
		for (int j = 0; j < m; j++) // [m][n] �ݺ��� ����
		{
			arg1[i][j] = rand() % RAND_SIZE;	// arg1 ������ ���� ����
			arg2[j][i] = rand() % RAND_SIZE;	// arg2������ ���� ����
		}

	}

	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
		{
			for (int k = 0; k < m; k++) // // ����� �� ���� �ݺ��� ����
			{
				total
				[i][j] += arg1[i][k] * arg2[k][j];
			}
		}
	}

	printf("arg1[%d][%d] \n", n, m);
	print_arg(arg1); // �迭 ����� ���� print_arg �Լ� ȣ��

	printf("arg2[%d][%d] \n", m, n);
	print_arg(arg2);

	printf("total[%d][%d] \n", m, n);
	print_arg(total);

	return 0;
}