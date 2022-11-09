#include <stdio.h>
#include <string.h>


int main(void)
{
	char str[80];
	char res_str[80];
	const char *star = "**************************************************************************";
    int len;
	printf(" Input your word : ");
	scanf_s("%s", str, (int)sizeof(str));
	len = strlen(str);
	if (len <= 5)
	{
		strcpy(res_str, str);
	}
	else
	{
		strncpy(res_str, str, 5);
		res_str[5] = '\0';
		strncat(res_str, star, len -5);
	}
	printf(" word : %s\n skip word : %s\n", str, res_str);
	return 0;

}