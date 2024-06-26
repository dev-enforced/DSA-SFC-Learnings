#include<bits/stdc++.h>
using namespace std;

bool isCharacterUpperCase(int characterAsciiCode){
	return characterAsciiCode >= 65 && characterAsciiCode <= 90;
}

string formatStringToLowercase(string userInput){
	
	string lowercaseFormattedStr = userInput;
	int lowercaseFormattedStrLength = lowercaseFormattedStr.length();
	
	for(int i = 0;i<lowercaseFormattedStrLength; i++){
		int currentCharAsciiValue = lowercaseFormattedStr[i];
		if(isCharacterUpperCase(currentCharAsciiValue)){
			char currentCharInLowercase = currentCharAsciiValue + 32;
			lowercaseFormattedStr[i] = currentCharInLowercase;
		}
	}
	
	
	return lowercaseFormattedStr;
}

string sortCharactersInString(string userInput){
	string result = "", stringToBeUsedForSorting = userInput;
	// int stringToBeUsedForSortingLen = stringToBeUsedForSorting.length();
	
	while(stringToBeUsedForSorting.length() != 0){
		int min_char_ascii_value = INT_MAX, min_char_count = 0;
		string charsLeftToProcess = "";
		
		for(int i = 0;i<stringToBeUsedForSorting.length();i++){
			int current_char_ascii_value = stringToBeUsedForSorting[i];
			min_char_ascii_value = min(min_char_ascii_value, current_char_ascii_value);
		}
		
		for(int i=0;i<stringToBeUsedForSorting.length();i++){
			int current_char_ascii_value = stringToBeUsedForSorting[i];
			if(current_char_ascii_value == min_char_ascii_value){
				min_char_count++;
			}else{
				charsLeftToProcess+=stringToBeUsedForSorting[i];
			}
		}
		
		char alphabetToAdd = min_char_ascii_value;
		for(int i=0;i<min_char_count;i++){
			result+=alphabetToAdd;
		}
		
		stringToBeUsedForSorting = charsLeftToProcess;
		
	}
	
	return result;
}

int main(){
	
	string currentUserInput;
	cin>>currentUserInput;
	
	
	currentUserInput = sortCharactersInString(formatStringToLowercase(currentUserInput));
	cout<<currentUserInput<<endl;
	
	
	for(int i = 0;i<=25;i++){
		char currentAlphabet = i+97;
		int charCount = 0;
		for(int j = 0;j<currentUserInput.length();j++){
			char currentChar = currentUserInput[j];
			if(currentChar == currentAlphabet){
				charCount++;
			}
			
		}
		cout<<currentAlphabet<<" : "<<charCount<<endl;
	}
	
	
	return 0;
}
