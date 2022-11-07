#include <stdio.h>
#include <stdlib.h>

#define PASSWORD {1215}        // 비밀번호 지정

void pwcheck(int* a);          // 입력과 비교를 받을 수 있는 함수 pwcheck 선언

void pwcheck(int* b)           // 매개변수는 pw의 값을 포인터로 받아옴
{
	int pw_input;              // 사용자가 입력할 비밀번호가 저장될 변수 pw_other 선언

	while (1)
	{
		printf("Please Input your password : ");
		scanf_s("%d", &pw_input);

		if (*b == pw_input)                            // 사용자 입력 비밀번호와 저장된 비밀번호가 같다면
		{
			printf("Normal termination..\n");
			break;
		}
		if (*b != pw_input)                            // 사용자 입력 비밀번호와 저장된 비밀번호가 다르다면
		{
			printf("not matched, retry..\n");
		}
	}
}


int main(void)
{
	int pw = PASSWORD;         // 변수 pw에 비밀번호 저장
	pwcheck(&pw);              // 함수 pwcheck 호출
	return 0;
}