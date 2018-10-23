/*
1. Write a program to find sum of all elements of an array. (Use functions)
*/

#include<iostream>
using namespace std;

int sum(int n){
	int s;
	int x[n];		//setting array size
	cout << "Please enter " << n << " numbers in the array whose sum you want to find \n";

	for(int i=0; i<n; i++){
		cin >> x[i];	//entering numbers in the array
		s = s + x[i];	//finding the sum of numbers in the array
	}
	return s;
} 

int main(){
	int  m;
	cout << "Hello \nHow many elements do you need in the array? \n";
	cin >> m;
	
	int p= sum(m);
	cout << "Sum of all the numbers in the array is "<< p << "\nThank You \n";
}
	
	
