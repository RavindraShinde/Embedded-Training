#include <stdio.h>

#define SETB(num, pos) ( (num) = (num) | ( 1 << (pos) ) )
#define CLRB(num, pos) ( (num) = (num) & ~( 1 << (pos) ) )

int main(){
	printf("bit is :%d\n", SETB(4,1));
	printf("bit is :%d\n", CLRB(4,1));
	return 0;
}
