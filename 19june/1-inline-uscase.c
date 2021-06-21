// Write a simple c program to demonstrate inline function advantage over the macro.
// not completed
#include <stdio.h>

inline static int myfunction(int a){
	return a*100;
}

int main()
{
	myfunction(10);
	return 0;
}
