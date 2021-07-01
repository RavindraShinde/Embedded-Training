#include <stdio.h>

#define CHECKBIT(num, pos) ((num) >> (pos)) & (1)

int main(){
	printf("bit is :%d\n", CHECKBIT(4,1));
	return 0;
}
