#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int rank = 2, m = 0;

	switch (rank)
	{
	case 1:                   // rank�� 1�϶�
		m = 300;
		break;
	case 2:                   // rank�� 2�϶�
		m = 200;
		break;
	case 3:                   // rank�� 3�϶�
		m = 100;
		break;
	default:                  // rank�� ��ġ�ϴ� case���� ������
		m = 10;
		break;

	}
	printf("m:%d\n", m);

	return 0;
}