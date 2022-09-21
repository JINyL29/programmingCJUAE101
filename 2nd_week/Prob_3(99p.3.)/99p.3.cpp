#include<stdio.h>
#include<stdlib.h>

int main(void)
{
	int kor, eng, mat;
	    kor = 3, eng = 5, mat = 4;

	int credits;            // Total Credits.
	int res;                // Calculation Result.

	double kscore, escore, mscore;
	       kscore = 3.8, escore = 4.4, mscore = 3.9;
	double grade;                          // Average Score.

	credits = kor + eng + mat;
	grade = kscore + escore + mscore;

	res = ((credits >= 10) && (grade > 4.0))
		? printf("%d\n",1)
		: printf("%d\n",0);

    return 0;
}