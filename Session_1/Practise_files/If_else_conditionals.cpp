#include<bits/stdc++.h>
using namespace std;

int main(){
	int marks;
	cin>>marks;
	
	
	if(marks>50){
		cout<<"You passed"<<endl;
	}else{
		cout<<"You failed"<<endl;
	}
	
	int age;
	cin>>age;
	if(age>18){
		cout<<"You get a driving license"<<endl;
	}
	
	int points;
	cin>>points;
	if(points>90){
		cout<<"You are an expert"<<endl;
	}else if(points>70){
		cout<<"You are an intermediate"<<endl;
	}else{
		cout<<"You are a beginner"<<endl;
	}
}
