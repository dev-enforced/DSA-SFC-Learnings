#include<bits/stdc++.h>
using namespace std;

bool isCharacterUpperCase(int currentCharAsciiCode){
	return currentCharAsciiCode >= 65 && currentCharAsciiCode <= 90;
}

string formatToLowercase(string userInput){
	string lowercaseFormattedStr = userInput;
	int lowercaseFormattedStrLen = lowercaseFormattedStr.length();
	for(int i = 0; i<lowercaseFormattedStrLen; i++){
		int currentCharAsciiCode = lowercaseFormattedStr[i];
		if(isCharacterUpperCase(currentCharAsciiCode)){
			currentCharAsciiCode+=32;
			lowercaseFormattedStr[i] = currentCharAsciiCode;
		}
	}
	return lowercaseFormattedStr;
}

int main(){
	
	string currentUserInput;
	cin>>currentUserInput;
	
	currentUserInput = formatToLowercase(currentUserInput);
	
	int currentUserInputLength = currentUserInput.length();
	
	int characterFrequencyArray[26] = {0};
	
	for(int i=0;i<currentUserInputLength;i++){
		int currentCharacterIndex = currentUserInput[i]-97;
		characterFrequencyArray[currentCharacterIndex]++;
	}
	
	for(int i=0;i<26;i++){
		char currentAlphabet = i+97;
		cout<<currentAlphabet<<" : "<<characterFrequencyArray[i]<<endl;
	}
	
	
	return 0;
}
