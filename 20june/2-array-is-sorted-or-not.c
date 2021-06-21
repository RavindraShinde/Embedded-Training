#include <stdio.h>
#include <stdlib.h>


int main(){
	int arr_sz, i, j;
	
	printf("enter the size for the array\n");
	scanf("%d", &arr_sz);

	if(!arr_sz) {
		printf("invalid size\n");
		return 0;
	}

	int *ptr = (int *) malloc(sizeof(int)*arr_sz);
	
	printf("enter arr elements\n");
	for( i = 0; i < arr_sz; i++){
		scanf(" %d", &ptr[i]);
	}

	for( i = 0; i < arr_sz-1; i++){

		for(j = i+1; j < arr_sz; j++) {
			if(ptr[i] > ptr[j]) {
				printf("Not Sorrted..!\n");
				return 0;
			}
			else continue;
		}
	}

	printf("Sorted..!\n");

	return 0;
}
