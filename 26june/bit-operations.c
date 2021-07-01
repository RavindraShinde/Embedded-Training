#include <stdio.h>

int main(){
	int num, pos;

	num = 19;
	pos = 3;

	//num = num | (1 << pos); // set the bit
	//num = num & ~(1 << pos); // clear the bit
	num = num ^ (1 << pos); // toggle the bit

	return 0;
}
