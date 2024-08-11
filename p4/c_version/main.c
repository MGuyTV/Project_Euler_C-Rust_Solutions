#include <stdio.h>
#include <string.h>
int isPalindrome(int num);

int main(){
	//start with two largest 3 digit numbers
	int a = 999;
	int b = 999;
	int max = 0;
	//Used a nested for loop to find the largest palindromic number
	for(int i = a; i > 0; i--){
		for(int j = b; j > 0; j--){
			if(isPalindrome(i * j)){
				if(i * j > max)
					max = i * j;
			}
		}
	}
	printf("%d\n", max);
}

int isPalindrome(int num){
	int temp = num;
	int remainder = 0;
	int reversed = 0;
	while(num != 0){
		remainder = num % 10;
		reversed = reversed * 10 + remainder;
		num /= 10;
	}

	if(temp == reversed)
		return 1;
	return 0;
	
}