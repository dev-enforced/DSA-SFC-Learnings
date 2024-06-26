#include<bits/stdc++.h>
using namespace std;

// Decimal to Binary

// Input: 5
// Output: "101"

// Input: 8
// Output: "1000"

int main(){
	
	int userInput;
	cin>>userInput;
	
	string result = "";
	
	// Storing all the remainders from the number's divisions with 2
	for(int i = userInput; i != 0;i /= 2){
		char binaryDigit = (i%2) + 48; // '0' or '1'
		// ASCII code for:
		// 0 -> 48
		// 1 -> 49
		result += binaryDigit;
	}
	
	int resultLength = result.length();
	
	// Reversing the remainders stored in the result substring
	for(int i=0;i<resultLength/2;i++){
		char value_to_be_swapped_towards_end = result[i];
		
		result[i] = result[resultLength-1-i];
		result[resultLength-1-i] = value_to_be_swapped_towards_end;
	}
	cout<<result<<endl;
	
	return 0;
}
