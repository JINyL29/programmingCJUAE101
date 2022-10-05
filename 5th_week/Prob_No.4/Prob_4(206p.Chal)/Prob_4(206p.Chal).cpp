#include <stdio.h>
#include <stdlib.h>

// Sum Of Integers From 1 to 10

int rec_func(int n)   //recursion
{
	if (n == 1) return 1;
	return rec_func(n - 1) + n;
}

int main(void)
{
	int total = rec_func(10);
	printf("The Total is : %d\n", total);
	return 0;
}