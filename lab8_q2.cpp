/*
2. Write a program to find the largest, smallest, mean, median, elements with highest frequency of the elements of all elements of an array. (Use functions for each of the task in the question)
*/

#include<iostream>
using namespace std;

//function to find largest number in the array
int largestNum(int x[], int n){
	int large= x[0];

	for(int i=1; i<n; i++){
		if ( x[i] > large ) {	//checking if any element is greater than 1st emement of array
			large = x[i];
		
		}
	}
	return large;
}

//function to find smallest number in the array
int smallestNum(int x[], int n){
	int small = x[0];

	for(int i=1; i<n; i++){
		if ( x[i] < small ) {	//checking if any element is smaller than 1st emement of array
			small = x[i];
		
		}
	}
	return small;
}

//function to find mean of elements in the array
float meanValue(int x[], int n){
	float sum = 0;

	for(int i=0; i<n; i++){
		sum = sum + x[i];	//adding all elements of the array
	}
	return sum/n;		//finding average
}

//function to sort all elements in the array
void sort(int x[], int n){
	int i, j, swap;
	for(i=0; i<n; i++){
		for(j=i; j<n; j++){
			if(x[i] > x[j]){	//swapping bigger element with smaller one
				swap = x[i];
				x[i] = x[j];
				x[j] = swap;
			}
		}
	}
}

//function to find median of all elements in the array
float medianValue(int x[], int n){

	//1st we need to arrange all the elements in increasing order
	sort(x, n);

	if(n%2 != 0){	//for odd numbers median is the middle element
		return x[n/2];
	}
	else{		//for even numbers median is average of 2 middle numbers
		return ( x[(n-1)/2] + x[n/2] ) / 2.0 ;
	}
}

//function to find element with highest frequency
int highestFrequency(int x[], int n){

	//1st we need to arrange all the elements in increasing order
	sort(x, n);

	int maxFrequency = 1, currentFrequency = 1, answer = x[0];
	for (int i=1; i<n; i++){
		if( x[i] == x[i-1] ){	//if both current number and previous number are same frequency increases
			currentFrequency++;
		}
		else {
			if(currentFrequency > maxFrequency){	//if this no's frequency is more than max freq. the max freq. = present freq. 
				maxFrequency = currentFrequency;
				answer = x[i-1];
			}
		currentFrequency = 1;
		}
	}

	//if last number is most frequent
	if (currentFrequency > maxFrequency){
		maxFrequency = currentFrequency;
		answer = x[n-1];
	}
	return answer;
}

//Driver fnction
int main(){
	int num, largest, smallest, high;
	float  mean, median ;

	cout << "Hello \nPlease enter how many elements do you need in the array \n";
	cin >> num;
	int array[num];	//Setting array size
	
	cout << "Enter numbers in the array \n";
	for (int i=0; i<num; i++){
		cin >> array[i];
	}

	largest = largestNum(array, num);
	cout << "The Largest element in the array is " << largest << endl;
	smallest = smallestNum(array, num);
	cout << "The Smallest element in the array is " << smallest << endl;
	mean = meanValue(array, num);
	cout << "The Mean of all elements in the array is " << mean << endl;
	median = medianValue(array, num);
	cout << "The Median of all elements in the array is " << median << endl;
	high = highestFrequency(array, num);
	cout << "In the array of entered elements " << high << " appears maximum number of times and thus has highest frequency." << endl;
	
	return 2;
}
