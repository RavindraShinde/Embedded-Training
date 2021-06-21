// Write a simple c program to demonstrate inline function advantage over the macro.
// not completed
#include <stdio.h>

#define myfunc(x) (x)*100

inline static int myfunction(int a){
	return a*100;
}

int main()
{	
	printf("inline- %d\n", myfunction(10));
	printf("mcro- %d\n", myfunc(10));

	return 0;
}
