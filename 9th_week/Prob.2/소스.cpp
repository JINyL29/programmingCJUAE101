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

	printf("å �̸� : %s\n", one.title);
	printf("���� : %s\n", one.author);
	printf("������ �� : %d\n", one.page);
	printf("���� : %d\n\n\n", one.price);

	struct book two;
	strcpy_s(two.title, "cosmos");
	strcpy_s(two.author, "Carl Edward Sagan");
	two.page = 396;
	two.price = 17550;

	printf("å �̸� : %s\n", two.title);
	printf("���� : %s\n", two.author);
	printf("������ �� : %d\n", two.page);
	printf("���� : %d\n\n\n", two.price);


	struct book three;
	strcpy_s(three.title, "How the World Really Works : A Scientist's Guide to Our Past, Present and Future");
	strcpy_s(three.author, "Vaclav Smil");
	three.page = 448;
	three.price = 17790;

	printf("å �̸� : %s\n", three.title);
	printf("���� : %s\n", three.author);
	printf("������ �� : %d\n", three.page);
	printf("���� : %d\n\n\n", three.price);


	return 0;
}