/** Desicions in C **/

#include<iostream>
#include<stdio.h>
using namespace std;
#include<string>

string ifCondition(int userAge = 0);
string ifElseCondition(int userAge = 0);
string ifElseIfCondition(int userAge = 0);
short getUserInput();

int main(){
	cout << "Decisions in C++" << endl;
	int age = getUserInput();
	cout << ifCondition(age) << endl;
	age = getUserInput();
	cout << ifElseCondition(age) << endl;
	age = getUserInput();
	cout << ifElseIfCondition(age) << endl;
	return 0;
}
short getUserInput(){
	short age = 0;
	cout << "Enter your age here: " << endl;
	cin >> age;
	return age;
}
string ifCondition(int userAge){
	int getUserAge = userAge;
	string statement = "";
	if(getUserAge >= 18){
		statement = "You can drive";
	}
	return statement;
}
string ifElseCondition(int userAge){
	int getUserAge = userAge;
	string statement = "";
	if(getUserAge >= 18){
		statement = "You can drive";
	}
	else{
		return "Grown-Up first, child.";
	}
	return statement;
}
string ifElseIfCondition(int userAge){
	int getUserAge = userAge;
	string statement = "";
	if(getUserAge >= 18 && getUserAge <= 49){
		statement = "You can drive";
	}
	else if(getUserAge > 49){
		statement = "stay \"SAFE\" grandpa";
	}
	else{
		return "Grown-Up first, child.";
	}
	return statement;
}