#include <stdio.h>

#define CHECKBIT(num, pos) ((num) >> (pos)) & (1)
#define SETB(num, pos) ( (num) = (num) | ( 1 << (pos) ) )
#define CLRB(num, pos) ( (num) = (num) & ~( 1 << (pos) ) )
#define TOGGLEB(num, pos) ( (num) = (num) ^( 1 << (pos) ) )

int main(){
	printf("bit is :%d\n", CHECKBIT(4,1));
	printf("bit is :%d\n", SETB(4,1));
	printf("bit is :%d\n", CLRB(4,1));
	printf("bit is :%d\n", TOGGLEB(4,1));
	return 0;
}
