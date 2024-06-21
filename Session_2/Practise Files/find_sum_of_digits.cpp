#include<bits/stdc++.h>
using namespace std;

// Approach 1
int findSumOfDigitsUsingWhile(int num){
	int sumOfDigits = 0;
	while(num!=0){
		int digit = num%10;
		sumOfDigits+=digit;
		num = num/10;
	}
	return sumOfDigits;
}


// Approach 2
int findSumOfDigitsUsingFor(int num){
	int sumOfDigits = 0;
	for(int i = num;i!=0;i/=10){
		int digit = i%10;
		sumOfDigits+=digit;
	}
	return sumOfDigits;
}

int main(){
	int userInput;
	cin>>userInput;
	cout<<"Sum of digits using while: "<<findSumOfDigitsUsingWhile(userInput)<<endl;
	cout<<"Sum of digits using for: "<<findSumOfDigitsUsingFor(userInput)<<endl;
	return 0;
}
