#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int arrayLength, min_value = INT_MAX, max_value = INT_MIN;
	cin>>arrayLength;
	
	int originalArray[arrayLength];
	
	for(int i = 0;i<arrayLength; i++){
		int userInput;
		cin>>userInput;
		originalArray[i] = userInput;
	}
	
	for(int i=0;i<arrayLength; i++){
		min_value = min(min_value, originalArray[i]);
		max_value = max(max_value, originalArray[i]);
	}
	
	cout<<"Min value is: "<<min_value<<endl;
	cout<<"Max value is: "<<max_value<<endl;
	
	return 0;
}
