#include <stdio.h>

#define EVEN_ODD(num) ( ((num) >> 0) & 1)

int main()
{
	int num;

	printf("enter the num\n");
	scanf("%d", &num);

	if(EVEN_ODD(num)) printf("ODD NUMBER..\n");
	else printf("EVEN NUMBER ..\n");

	return 0;
}
