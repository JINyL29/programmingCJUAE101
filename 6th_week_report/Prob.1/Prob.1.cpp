#include <stdio.h>
#include <stdlib.h>

#define PASSWORD {1215}        // ��й�ȣ ����

void pwcheck(int* a);          // �Է°� �񱳸� ���� �� �ִ� �Լ� pwcheck ����

void pwcheck(int* b)           // �Ű������� pw�� ���� �����ͷ� �޾ƿ�
{
	int pw_input;              // ����ڰ� �Է��� ��й�ȣ�� ����� ���� pw_other ����

	while (1)
	{
		printf("Please Input your password : ");
		scanf_s("%d", &pw_input);

		if (*b == pw_input)                            // ����� �Է� ��й�ȣ�� ����� ��й�ȣ�� ���ٸ�
		{
			printf("Normal termination..\n");
			break;
		}
		if (*b != pw_input)                            // ����� �Է� ��й�ȣ�� ����� ��й�ȣ�� �ٸ��ٸ�
		{
			printf("not matched, retry..\n");
		}
	}
}


int main(void)
{
	int pw = PASSWORD;         // ���� pw�� ��й�ȣ ����
	pwcheck(&pw);              // �Լ� pwcheck ȣ��
	return 0;
}