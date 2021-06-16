#include <stdio.h>


void print_dec_bin(int num){
	
	if(num <= 0  ) return;	
	num = num / 2;

	printf("%d ", num%2);	
	print_dec_bin(num);	

}

int main(){

	int num;

	printf("enter the number\n");
	scanf("%d", &num);

	print_dec_bin(num);
	printf("\n");

	return 0;
}

