#include <stdio.h>

int main()
{
	char c1, c2, c3;
	c1 = 65;
	c2 = 'b';
	c3 = '3';

	printf("c1-%c\n", c1); //A
	printf("c2-%c\n", c2); //b
	printf("c3-%c\n", c3); //3

	printf("c1-%d\n", c1); //65
	printf("c2-%d\n", c2); //98
	printf("c3-%d\n", c3); //51

	return 0;
}
