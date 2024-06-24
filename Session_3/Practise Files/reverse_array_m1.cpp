#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int arrLength;
	cin>>arrLength;
	
	int originalArray[arrLength], reversedArray[arrLength];
	
	for(int i = 0;i<arrLength;i++){
		int userInput;
		cin>>userInput;
		originalArray[i] = userInput;
		reversedArray[arrLength-1-i] = userInput;
	}
	cout<<"Original Array: "<<endl;
	for(int i = 0; i<arrLength;i++){
		cout<<originalArray[i]<<" ";
	}
	
	cout<<endl;
	
	cout<<"Reversed Array: "<<endl;
	for(int i=0;i<arrLength;i++){
		cout<<reversedArray[i]<<" ";
	}
	
	cout<<endl;
	
	return 0;
}
