fn main(){//test for commit
	let mut max: u32 = 0;
	let mut i: u32 = 999;
	let mut j: u32 = 999;

	while i > 0 {
		j = 999;
		while j > 0 {
			if is_palindrome(i * j) {
				//println!("{}", i * j);
				if i * j > max {
					max = i * j;
				}
			}
			j-=1;
		}
		i-=1;
	}
	println!("{}", max);
}

fn is_palindrome(mut num: u32) -> bool{
	let temp = num.clone();
	let mut remainder = 0;
	let mut reversed = 0;
	while num != 0 {
		remainder = num % 10;
		reversed = reversed * 10 + remainder;
		num /= 10;
	}

	if temp == reversed {
		return true;
	}
	return false;
}