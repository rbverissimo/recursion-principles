#include <stdio.h>

int recursiveSum(int n); 


int main (){
	
	int n, result;  
	
	printf("This algorithm will sum from 1 to any number you define!!\n");
	printf("Pass an integer value: ");
	scanf("%d", &n);
	
	result = recursiveSum(n); 
	
	printf("\nThe result of the sum is: %d", result);
	
	return 0; 
}

int recursiveSum(int n){ 

	if(n <= 1){
		return n; 
	}

	return n + recursiveSum(n - 1); 
}

