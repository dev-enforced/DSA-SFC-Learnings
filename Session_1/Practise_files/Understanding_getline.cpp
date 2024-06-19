#include<bits/stdc++.h>
using namespace std;

#define MAX_NAME_LEN 20
int main(){
	// understanding the use of getline
	
	// Approach 1: 
	string multiWordedUserInput;
	getline(cin, multiWordedUserInput);
	cout<<multiWordedUserInput<<endl;
	
	// Approach 2
	char person_name[MAX_NAME_LEN];
	cout<<"Enter your name(press $ to complete) : "<<endl;
	cin.getline(person_name, MAX_NAME_LEN, '$');
		
	cout<<"Name is: "<<person_name<<endl; 
	
	return 0;
}
