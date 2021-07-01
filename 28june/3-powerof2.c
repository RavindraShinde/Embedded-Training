#include <stdio.h>

//4
//
//0100
//0011
//0000

int main()
{
	int num;

	printf("enter the num\n");
	scanf("%d", &num);


	if( num & (num-1) ) printf("Not power of 2\n");
	else printf("power of 2\n");

	return 0;
}
