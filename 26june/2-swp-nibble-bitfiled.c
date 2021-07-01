#include <stdio.h>

// 20 - 0001 0100 
typedef union st{
	unsigned char a;
	struct my{
		char b:4;
		char c:4;
	}ob_st;
}us;

int main(){
	us ob1;
	ob1.a = 20;
	
	printf("%ld\n", sizeof(us));

	unsigned char temp;

	printf("Before swap: %d\n", ob1.a);
	printf("Before swap: %d\n", ob1.ob_st.b);
	printf("Before swap: %d\n", ob1.ob_st.c);

	temp = ob1.ob_st.b;
	ob1.ob_st.b = ob1.ob_st.c;
	ob1.ob_st.c = temp;

	printf("After swap: %d\n", ob1.a);
	printf("After swap: %d\n", ob1.ob_st.b);
	printf("After swap: %d\n", ob1.ob_st.c);

	return 0;
}


