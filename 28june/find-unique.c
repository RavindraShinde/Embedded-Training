#include <stdio.h>

int main(){

	int arr[] = {20,20,40,40,13,13,11,88,88,98,99,11,11};
	int elem = sizeof(arr)/sizeof(arr[0]);

	int i, j;

	for(i=0; i<elem; i++){
		for(j=0; j<elem; j++){
			if( arr[i] == arr[j] && i != j ) break;
		}
		if(j==elem) printf("%d\n", arr[i]); 
	}

	return 0;
}
