#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int userInput, factorial = 1;
	cin>>userInput;
	
	for(int i = userInput; i>=1;i--){
		factorial *= i;
	}
	cout<<"Factorial of "<<userInput<<" is: "<<factorial<<endl;
	
	return 0;
}
