#include<bits/stdc++.h>
using namespace std;


// Binary To Decimal

// Input: 110
// Output: 6

// Input: 101
// Output: 5


int main(){
	
	string userInput;
	cin>>userInput;
	
	int result = 0, userInputLength = userInput.length();
	
	for(int i = 0;i<userInputLength;i++){
		int currentBinaryDigit = userInput[i]-48;
		result += currentBinaryDigit * pow(2, userInputLength-1-i);
	}
	
	cout<<result<<endl;
	
	return 0;
}
