#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	char ch;

	printf("Input Number : ");
	scanf_s("%c", &ch);

	printf("The Ascii code of 't' is : %d\n",ch);

	return 0;

}