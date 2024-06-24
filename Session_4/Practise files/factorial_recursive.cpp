#include<bits/stdc++.h>
using namespace std;

int getFactorial(int givenNum){
	if(givenNum == 0 || givenNum == 1){
		return 1;
	}else{
		return givenNum * getFactorial(givenNum-1);
	}
	
}

int main(){
	
	int userInput;
	cin>> userInput;
	cout<<"Factorial of "<<userInput<<" is: "<<getFactorial(userInput)<<endl;
	
	return 0;
}
