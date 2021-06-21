#include <stdio.h>
#include <stdlib.h>


int main(){

	int arr_sz, big1, big2;
	
	printf("enter the array size\n");
	scanf("%d", &arr_sz);

	int *ptr = (int *) malloc(sizeof(int)*arr_sz);


	for(int i =0; i < arr_sz; i++){
		scanf(" %d", &ptr[i]);	
	}

	if(arr_sz < 2){
		printf("only one array element\n");
		printf("%d\n", ptr[0]);
		return 0;
	}

	big1 = big2 = ptr[0];

	for(int i =0; i < arr_sz; i++){
		if(ptr[i] > big1){
			
			big1 = ptr[i];

			if(big1 > big2){
				big2 = ptr[i];
			}
		}
	}

	printf("2nd biggest: %d\n", big2);
	
	return 0;
}
