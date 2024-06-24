#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int arrayLength;
	cin>> arrayLength;
	
	int originalArray[arrayLength];
	
	// creating the original array
	for(int i = 0;i<arrayLength;i++){
		int userInput;
		cin>>userInput;
		originalArray[i] = userInput;
	}
	
	// printing the original array	
	for(int i = 0;i<arrayLength; i++){
		cout<<originalArray[i]<<" ";
	}
	
	// reversal logic
	for(int i=0;i<(arrayLength/2);i++){
		int value_to_be_swapped_towards_end = originalArray[i];
		originalArray[i] = originalArray[arrayLength-1-i];
		originalArray[arrayLength-1-i] = value_to_be_swapped_towards_end;
	}
	cout<<endl;
	// printing the reversed array
	for(int i=0;i<arrayLength;i++){
		cout<<originalArray[i]<<" ";
	}
	
	return 0;
}
