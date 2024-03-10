/*Project Description:
 * If we list all the natural numbers below 10 that are multiples of 3 or 5,
 * we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *  
 * Find the sum of all the multiples of 3 or 5 below 1000.
 * */

int main(){
	int result = sum(1000);
	printf("The sum of all the multiples of %d or %d below %d is: %d\n", 3, 5, 1000, result);

}

int sum(int n){
	//Creat for loop the checks which digits are multiples of the number being
	//counted, then added the sum up per loop
	int count = 0;
	for(int i = 0; i < n; i++){
		if(i % 3 == 0 || i % 5 == 0){
			count = count + i;
		}

	}
	return count;

}
