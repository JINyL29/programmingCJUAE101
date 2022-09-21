#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	double weight, height, bmi;

	printf("Please Input Your Weight(kg) and Height(m) : \n");
	scanf_s("%lf%lf", &weight, &height);

	height = height / 100.0;
	bmi = weight / (height * height);

	((bmi >= 20.0) && (bmi < 25.0))
		? printf("It's normal.\n")
		: printf("You have to diet.\n");

		return 0;


}