// Program to find the sum of digits of a number until the sum is reduce to 1 digit

#include <stdio.h>

int sumfornum(int num){

	int rem, sum = 0;

	while( num > 0 ) {
		rem = num % 10;
		sum = sum + rem;
		num = num/10;
	}

	return sum;
}

int main(){

	int num;
	
	scanf("%d", &num);

	printf("sum=%d\n", sumfornum(num));

	while( num > 9 ){	
		num = sumfornum( num );	
		//if( num < 9) break;
		printf("num - %d\n", num);
		sleep(1);
	}

	printf("final value: %d\n", num);

	return 0;
}
