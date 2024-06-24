#include<bits/stdc++.h>
using namespace std;

int main(){
	
	int userInput, factorCount = 0;
	cin>>userInput;
	
	for(int i = 1; i<=sqrt(userInput); i++){
		if(userInput% i == 0){
			if(i == (userInput/i)){
				factorCount+=1;
			}else{
				factorCount+=2;	
			}
			
		}
	}
	
	cout<<"Number of factors of "<<userInput<<" is: "<<factorCount<<endl;
		
	return 0;
}
