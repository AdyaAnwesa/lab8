/*
4. Write a program to merge 2 arrays (just one after another into another array), find maximum of 2 arrays [maximum element of all the elements in both the arrays], find minimum of 2 arrays [similar to maximum]. (Use functions for each)
*/

#include <iostream>
using namespace std;

//function for max
int max(int a[], int b){
	return a[b-1];
}

//function for min
int min(int a[], int b){
	return a[0];
}

int merge(int a[], int b[],int aub[], int x,int y,int z){
	z = x + y;
	for(int n=0; n<x; n++){
		aub[n] = a[n];	//use elements of a to fill till x
	}		
	for(int n =0; n<y; n++){
		aub[n+x] = b[n];	//use elements of b to fill from x+1 to z
	}
}

int bubblesort(int a[], int x){
	for(int n=0; n<x; n++){
		for(int m=n+1;m<x; m++){
			if(a[m] < a[n]){
				int g = a[m];	//arrange numbers such that heavier numbers end up last
				a[m] = a[n];
				a[n] = g;
			}
		}
	}
}
	



int main(){
	int x;    //ask user to define the array
	cout <<"enter the number of terms to be in array"<<endl;
	cin >>x;
	int array[x];
	cout <<"enter the numbers now"<<endl;
	for(int n=0;n<x;n++)
	cin >>array[n];


	int y;    //ask user to define the array
	cout <<"enter the number of terms to be in 2nd array"<<endl;
	cin >>y;
	int array2[y];
	cout <<"enter the numbers now"<<endl;
	for(int n=0;n<y;n++)
	cin >>array2[n];
	int z = x + y;
	int aub[z];
	
	merge(array, array2, aub,x ,y, z);
	bubblesort(aub, z);
	int w = max(aub, z);
	int h = min(aub, z);
	cout <<"the maximum number is " << w <<endl;
	cout <<"the minimum number is " << h <<endl;

	return 4;
}
