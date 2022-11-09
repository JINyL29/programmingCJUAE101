#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[80];
	strcpy(str, "wine");                       // wine
	strcat(str, "apple");                      // wineapple
	strncpy(str, "pear", 1);                   // pineapple
	printf("%s, %d\n", str, strlen(str));      // pineapple , 9
    return 0;
}

