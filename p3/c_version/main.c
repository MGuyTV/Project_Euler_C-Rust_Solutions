#include <stdio.h>




int main(){
	long num = 600851475143;

	for(int i = 2; i < num; i++){
		while(num % i == 0){
			num = num / i;
		}
	}
	printf("%ld\n", num);



	return 0;

}

