#include <stdio.h>

void print_n_1(int num){

	if(num == 0) return;

	printf("%d ", num);
	print_n_1(num-1);
}

void print_1_n(int num){

	if(num == 0) return;

	print_1_n(num-1);
	
	printf("%d ", num);
}

int main(){

	int num;
	
	printf("Enter the number\n");
	scanf("%d", &num);

	print_n_1(num);
	printf("\n");
	print_1_n(num);
	printf("\n");

	return 0;
}
