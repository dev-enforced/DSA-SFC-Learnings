#include<bits/stdc++.h>
using namespace std;

int main(){
	
	 string userInput;
	 cin>>userInput;
	 
	 int firstCharacterASCIIValue = userInput[0];
	 
	 if(firstCharacterASCIIValue >= 97 && firstCharacterASCIIValue <= 122){
		int capitalisedLetterASCIIValue = firstCharacterASCIIValue-32;
	 	userInput[0] = capitalisedLetterASCIIValue;
	 }
	 
	 cout<<userInput<<endl;
	 
	 
	
	return 0;
}
