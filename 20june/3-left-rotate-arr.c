#include <stdio.h>
#include <stdlib.h>


int main(){
	int arr_sz, i, j, k, key, usr_ip;
	
	printf("enter the size for the array\n");
	scanf("%d", &arr_sz);

	printf( "enter no: rotate the arr elements by\n");
	scanf(" %d", &usr_ip);

	if(!arr_sz) {
		printf("invalid size\n");
		return 0;
	}

	int *ptr = (int *) malloc(sizeof(int)*arr_sz);
	
	printf("enter arr elements\n");
	for( i = 0; i < arr_sz; i++){
		scanf(" %d", &ptr[i]);
	}

	for( i = 0 ; i < usr_ip; i++){
		
		key = ptr[0];

		for(k = 0, j = 0; j < arr_sz-1; j++){
			printf("%d:%d\n", ptr[i], ptr[j]);
			ptr[j] = ptr[j+1];	
			printf("%d:%d\n", ptr[i], ptr[j]);
		}
		ptr[arr_sz-1] = key;
	}

	printf("After rotating\n");

	for( i = 0; i < arr_sz; i++){
		printf("%d\n", ptr[i]);
	}

	return 0;
}
