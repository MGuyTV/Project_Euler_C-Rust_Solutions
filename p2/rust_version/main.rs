
fn main(){
	let mut result = 0;
	for i in 0..36 {
		let my_fib = fib(i);
		if my_fib % 2 == 0 && my_fib < 4000000 {
			result += my_fib;
		}
	}
	println!("{}", result);


}

fn fib(n: u32) -> u32{
	if n == 0 || n == 1 {
		return 1;
	}
	return fib(n-1) + fib(n-2);


}
