#include<bits/stdc++.h>
using namespace std;

int main(){
	
	// Using array to store the factorial of numbers from 0 to 100
	int factorial[101], userInput;
	
	factorial[0] = 1;
	
	// Using n! = n * (n-1)! pattern to assign factorial values for remaining positions of the array
	
	for(int i = 1;i<=100;i++){
		factorial[i] = i * factorial[i-1];
	}
	
	cout<<"Enter value between 0 to 100"<<endl;
	cin>>userInput;
	cout<<"Factorial of "<<userInput<<" is: "<<factorial[userInput]<<endl;
	
	
	return 0;
}
