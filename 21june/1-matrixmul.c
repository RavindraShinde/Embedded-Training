//Write a C Program to show matrix multiplication on 2-D Array. 

#include<stdio.h>    
#include<stdlib.h>  
int main()
{  
	int i, j, k, r, c; 
	
	printf("enter the no of rows and columns\n");    
	scanf("%d %d",&r, &c);	
	
	int **a = (int **)malloc(sizeof(int *) *r);
	int **b = (int **)malloc(sizeof(int *) *r);
	int **res = (int **)malloc(sizeof(int *) *r);

	for(i = 0; i < r; i++){
		a[i] = (int*) malloc(sizeof(int)*c);
		b[i] = (int*) malloc(sizeof(int)*c);
		res[i] = (int*) malloc(sizeof(int)*c);
	}

	printf("enter the a-matrix element\n");    
	for(i = 0; i < r; i++){
		for(j = 0;j < c; j++)    
			scanf("%d", &a[i][j]);
	}    

	printf("enter the b-matrix element\n");    
	for(i = 0; i < r; i++){
		for(j = 0;j < c; j++)    
			scanf("%d", &b[i][j]);
	}    

	printf("multiplication of the matrix\n");    
	for(i = 0;i < r; i++){    
		for(j = 0;j < c; j++){    
			
			res[i][j] = 0;    
			
			for(k = 0; k < c; k++){    
				res[i][j] += a[i][k] * b[k][j];    
			}    
		}    
	}    

	for(i = 0; i < r; i++, printf("\n")){    
		for(j = 0;j < c; j++) 
			printf("%d\t", res[i][j]);
	}    

	return 0;  
}  

