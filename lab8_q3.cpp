/*
3. Write a program for kth largest, kth smallest element of an array. (Use functions : e.g. klarge (int array[], int size, int k), similarly for smallest)
*/

#include <iostream>
using namespace std;

//write function that will mean
int max(int a[], int b, int c){//for max
	return a[b-c];
}

int min(int a[], int b, int c){//for min
	return a[c-1];
}

//write main function
	int main(){
	int x;    //ask user to define the array
	cout <<"enter the number of terms to be in array"<<endl;
	cin >>x;
	int array[x];
	cout <<"enter the numbers now"<<endl;
	for(int n=0;n<x;n++)
	cin >>array[n];
	
	for (int i=0;i<x-1;i++)    
        for (int l=0;l<x-i-1;l++)  
	if(array[l]>array[l+1]) {//this will arrange elements according to value
		array[l]=array[l]+array[l+1];
		array[l+1]=array[l]-array[l+1];
		array[l]=array[l]-array[l+1];}
	//ask user
	cout <<"enter the k as in to find the kth largest and smallest"<<endl;
	int k;
	cin >>k;
	int kmax = max(array, x, k);
	int kmin = min(array, x, k);
	cout <<"kth max is "<< kmax <<endl;
	cout <<"kth min is "<< kmin <<endl;
	cout <<"thank you for using this program"<<endl; 
	return 3;
	}
