#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct book
{
	char title[200];
	char author[80];
	int page;
	int price;
};

int main(void)
{
	struct book one;

	strcpy_s(one.title, "wonder");
	strcpy_s(one.author, "jackson");
	one.page = 349;
	one.price = 7730;

	printf("책 이름 : %s\n", one.title);
	printf("저자 : %s\n", one.author);
	printf("페이지 수 : %d\n", one.page);
	printf("가격 : %d\n\n\n", one.price);

	struct book two;
	strcpy_s(two.title, "cosmos");
	strcpy_s(two.author, "Carl Edward Sagan");
	two.page = 396;
	two.price = 17550;

	printf("책 이름 : %s\n", two.title);
	printf("저자 : %s\n", two.author);
	printf("페이지 수 : %d\n", two.page);
	printf("가격 : %d\n\n\n", two.price);


	struct book three;
	strcpy_s(three.title, "How the World Really Works : A Scientist's Guide to Our Past, Present and Future");
	strcpy_s(three.author, "Vaclav Smil");
	three.page = 448;
	three.price = 17790;

	printf("책 이름 : %s\n", three.title);
	printf("저자 : %s\n", three.author);
	printf("페이지 수 : %d\n", three.page);
	printf("가격 : %d\n\n\n", three.price);


	return 0;
}