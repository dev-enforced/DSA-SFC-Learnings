#include<bits/stdc++.h>
using namespace std;

int count_of_iterations = 0;

void sayHelloToRoshan(){
	cout<<"Hi ";
	count_of_iterations++;
	if(count_of_iterations == 3) return;
	sayHelloToRoshan();
	cout<<"Roshan";
}

int main(){
	sayHelloToRoshan();
	return 0;
}
