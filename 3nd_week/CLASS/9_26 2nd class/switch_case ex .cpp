#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int rank = 2, m = 0;

	switch (rank)
	{
	case 1:                   // rank가 1일때
		m = 300;
		break;
	case 2:                   // rank가 2일때
		m = 200;
		break;
	case 3:                   // rank가 3일때
		m = 100;
		break;
	default:                  // rank와 일치하는 case값이 없으면
		m = 10;
		break;

	}
	printf("m:%d\n", m);

	return 0;
}