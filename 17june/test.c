#include <stdio.h>

int testfunc(int a, int b)
{
	printf("Arg within function : %d %d\n", a, b);
	return a+b;
}

int main()
{
	int d=100; //-8(%rbp)
	int t=200; //-4(%rbp)
	
	testfunc(d, t); //


	return 0;
}

