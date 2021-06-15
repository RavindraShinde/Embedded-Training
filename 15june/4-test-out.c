#include <stdio.h>

int main(){

	int x = 10, y = 3;
	{
		int x = 100, z = 6;
		printf("%d %d\n", x, z);
	}

	printf("%d %d\n", x, z);// err- z undeclared

	return 0;
}
