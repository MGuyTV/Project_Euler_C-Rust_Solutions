/*Project Description:
 * If we list all the natural numbers below 10 that are multiples of 3 or 5,
 * we get 3, 5, 6 and 9. The sum of these multiples is 23.
 *  
 * Find the sum of all the multiples of 3 or 5 below 1000.
 * */

 fn main(){
 	let answer = sum(1000);
 	println!("The sum of all multiples of 3 or 5 below 1000 is: {answer}");



 }
//Answer should be 233168
 fn sum(n: i32) -> i32{

 	//The created for loop checks which digits are multiples of the number being
	//counted, then added the sum up per loop
	let mut i = 0;
	let mut count = 0;
	while i < n {
		if i % 3 == 0 || i % 5 == 0 {
			count = count + i;

		}
		i+=1;


	}
	return count;

 }