fn main(){
	let mut num: u64 = 600851475143;
	let mut i = 2;  
	while i < num{
		while num % i == 0 {
			num = num / i;
		}
		i+= 1;
	}
	println!("{}", num);

}



