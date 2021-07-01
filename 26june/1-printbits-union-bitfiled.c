#include <stdio.h>

typedef union st{
	unsigned char a;
	unsigned char b:1;
	unsigned char c:1;
	unsigned char d:1;
	unsigned char a1:1;
	unsigned char b2:1;
	unsigned char c3:1;
	unsigned char d4:1;
}us;

int main(){
	us ob1;

	ob1.a = 255;
	
	printf("%ld\n", sizeof(us));
	printf("%d\n", ob1.a);
	printf("%d\n", ob1.b);
	printf("%d\n", ob1.c);
	printf("%d\n", ob1.d);
	printf("%d\n", ob1.a1);
	printf("%d\n", ob1.b2);
	printf("%d\n", ob1.c3);
	printf("%d\n", ob1.d4);

	return 0;
}


