#include <stdio.h>

int main(){
	//calculate the sum of the first 1,000,000 even fibonacci numbers not including 1,000,000 itself
	int result = 0;
	for(int i = 0; i < 35; i++){
		int my_fib = fib(i);
		if(my_fib % 2 == 0 && my_fib < 4000000){
			result += fib(i);
		}
	}
	printf("%d\n", result);


}


int fib(int n){
	if(n == 0 || n == 1){
		return 1;
	}
	return fib(n-1) + fib(n-2);


}